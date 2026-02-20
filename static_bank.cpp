#include<iostream>
using namespace std;

class BankAccount {
    static int next_acc_no; // shared across all accounts
    int acc_no;
    int bal = 0;

public:
    void input() {
        acc_no = ++next_acc_no; // auto-generate account number
        cout << "Your account number is: " << acc_no << endl;
    }

    void checkbal() {
        cout << "You have " << bal << " left in your account " << acc_no << endl;
    }

    void withdrawal(int amount) {
        if (bal == 0 || amount > bal) {
            cout << "Insufficient balance. Chill." << endl;
            return;
        }
        bal -= amount;
        cout << "You withdrew " << amount << " rupees" << endl;
        checkbal();
        cout << endl;
    }

    void deposit(int amount) {
        bal += amount;
        cout << "You deposited " << amount << " rupees" << endl;
        checkbal();
        cout << endl;
    }
};

// static member definition (MANDATORY)
int BankAccount::next_acc_no = 1000;

int main() {
    BankAccount b1, b2;

    b1.input();
    b1.deposit(500);

    b2.input();
    b2.deposit(1000);
    b2.withdrawal(300);

    return 0;
}
