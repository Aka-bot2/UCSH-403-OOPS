#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

// ==========================================
// 1. DATA STRUCTURES FOR STORAGE
// ==========================================
// We use a struct/class with fixed sizes to save directly to binary
struct UserRecord {
    int regNo;
    char name[50];
    char role[20];
};

// ==========================================
// 2. USER HIERARCHY
// ==========================================
class User {
protected:
    int regNo;
    char name[50];
public:
    User(int r, const char* n) : regNo(r) { strncpy(name, n, 49); }
    virtual void showDashboard() = 0;
    virtual ~User() {}
};

class Member : virtual public User {
public:
    Member(int r, const char* n) : User(r, n) {}
    void showDashboard() override {
        cout << "\n>>> MEMBER DASHBOARD <<<\nWelcome " << name << "! You can Upload/Edit files.\n";
    }
    void logout() { cout << "Member " << name << " logged out.\n"; }
};

class Admin : public Member {
public:
    Admin(int r, const char* n) : User(r, n), Member(r, n) {}
    void showDashboard() override {
        cout << "\n>>> ADMIN DASHBOARD <<<\nWelcome Administrator " << name << "! System logs available.\n";
    }
};

// ==========================================
// 3. THE LOGIN & SYSTEM MANAGER
// ==========================================
class MultimediaSystem {
    const string userFile = "users.dat";

public:
    // Automatically seed the file with data if it doesn't exist
    void seedDatabase() {
        ifstream check(userFile);
        if (check) return; // File already exists

        cout << "[System] Initializing database with default users...\n";
        UserRecord defaults[] = {
            {101, "Alice", "Admin"},
            {102, "Bob", "Member"},
            {103, "Charlie", "Member"}
        };

        ofstream out(userFile, ios::binary);
        for (const auto& u : defaults) {
            out.write(reinterpret_cast<const char*>(&u), sizeof(UserRecord));
        }
        out.close();
    }

    // Automated Login Logic
    void performAutoLogin(int inputID, const char* inputName) {
        ifstream in(userFile, ios::binary);
        UserRecord temp;
        bool found = false;

        while (in.read(reinterpret_cast<char*>(&temp), sizeof(UserRecord))) {
            if (temp.regNo == inputID && strcmp(temp.name, inputName) == 0) {
                found = true;
                cout << "\n[Success] Login verified for ID: " << inputID << endl;

                // Polymorphic pointer to handle different roles
                User* session = nullptr;
                if (strcmp(temp.role, "Admin") == 0) {
                    session = new Admin(temp.regNo, temp.name);
                } else {
                    session = new Member(temp.regNo, temp.name);
                }

                session->showDashboard();
                delete session;
                break;
            }
        }

        if (!found) {
            cout << "\n[Error] Invalid ID or Name. Access Denied.\n";
        }
        in.close();
    }
};

// ==========================================
// 4. THE AUTOMATED MAIN
// ==========================================
int main() {
    MultimediaSystem system;
    
    // Step 1: Create the binary file with dummy data automatically
    system.seedDatabase();

    cout << "--- AUTOMATED LOGIN TEST ---" << endl;

    // Test 1: Correct Admin Login
    cout << "\nAttempting Login 1 (Admin): ID 101, Name 'Alice'";
    system.performAutoLogin(101, "Alice");

    // Test 2: Correct Member Login
    cout << "\nAttempting Login 2 (Member): ID 102, Name 'Bob'";
    system.performAutoLogin(102, "Bob");

    // Test 3: Incorrect Login
    cout << "\nAttempting Login 3 (Failure): ID 999, Name 'Hacker'";
    system.performAutoLogin(999, "Hacker");

    cout << "\n--- TEST COMPLETE ---" << endl;
    return 0;
}