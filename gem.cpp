#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

// ==========================================
// 1. TEMPLATE FOR PERSISTENCE
// ==========================================
template <typename T>
class DataManager {
public:
    static void save(const string& filename, T& obj) {
        ofstream outFile(filename, ios::binary | ios::app);
        outFile.write(reinterpret_cast<char*>(&obj), sizeof(T));
        outFile.close();
    }
    static void displayAll(const string& filename) {
        T temp;
        ifstream inFile(filename, ios::binary);
        if (!inFile) return;
        while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(T))) {
            temp.display();
        }
        inFile.close();
    }
};

// ==========================================
// 2. RESOURCE & LOGISTICS CLASSES
// ==========================================

class Equipment {
    int id;
    char name[40];
    bool available;
public:
    Equipment() {}
    Equipment(int i, const char* n) : id(i), available(true) { strncpy(name, n, 39); }
    void display() { cout << "[Equip] ID: " << id << " | Name: " << name << " | Status: " << (available ? "Available" : "Issued") << endl; }
};

class MultimediaFile {
    int id;
    char fileName[50];
public:
    MultimediaFile() {}
    MultimediaFile(int i, const char* fn) : id(i) { strncpy(fileName, fn, 49); }
    void display() { cout << "[File] ID: " << id << " | Name: " << fileName << endl; }
};

class FileCategory {
    char catName[30];
public:
    FileCategory() {}
    FileCategory(const char* n) { strncpy(catName, n, 29); }
    void display() { cout << "[Category] " << catName << endl; }
};

class Project {
    int id;
    char title[50];
public:
    Project() {}
    Project(int i, const char* t) : id(i) { strncpy(title, t, 49); }
    void display() { cout << "[Project] ID: " << id << " | Title: " << title << endl; }
};

// ==========================================
// 3. USER HIERARCHY (The Fixed Classes)
// ==========================================

class User { 
protected:
    int regNo;
    char name[50];
public:
    User(int r, const char* n) : regNo(r) { strncpy(name, n, 49); }
    virtual void login() { cout << name << " logged in.\n"; }
    virtual void logout() = 0;
    virtual ~User() {}
};

class NonMember : virtual public User {
public:
    NonMember(int r, const char* n) : User(r, n) {}
    void logout() override { cout << "Non-Member logging out.\n"; }
};

class Member : virtual public User {
protected:
    char role[20];
public:
    // This constructor was causing the error
    Member(int r, const char* n, const char* rl) : User(r, n) { strncpy(role, rl, 19); }
    void logout() override { cout << "Member logging out.\n"; }
};

class Editor : virtual public Member {
public:
    Editor(int r, const char* n) : User(r, n), Member(r, n, "Editor") {}
    virtual void editMedia() { cout << "Editing media...\n"; }
};

class Designer : virtual public Member {
public:
    Designer(int r, const char* n) : User(r, n), Member(r, n, "Designer") {}
    virtual void makePoster() { cout << "Designing poster...\n"; }
};

// FIX 1: GraphicEditor must explicitly call Member's constructor
class GraphicEditor : public Editor, public Designer {
public:
    GraphicEditor(int r, const char* n) 
        : User(r, n), Member(r, n, "Graphic Editor"), Editor(r, n), Designer(r, n) {}
    
    void makeGraphics() { cout << "Combining editing and design for graphics.\n"; }
    void logout() override { cout << "Graphic Editor logging out.\n"; }
};

// ==========================================
// 4. MAIN EXECUTION
// ==========================================

int main() {
    cout << "=== FULL MULTIMEDIA SYSTEM INTEGRATION ===\n\n";

    
}