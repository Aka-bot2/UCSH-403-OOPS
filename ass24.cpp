/*
Problem 2: Simple Bank System
Implement a BankAccount class for a basic banking application. The default constructor initializes account number
to "0000" and money to 0, printing "Default account created", while the parameterized constructor takes string
number and int money, printing "Account [number] created". Destructor prints "Account [number] closed". Use
static int totalAccounts incremented in constructors and decremented in destructor. Create member function
display() for account info and global function checkBalance(BankAccount &acc) passing by reference to show
balance. Test with static and dynamic allocation using new/delete.
*/

#include<iostream>
using namespace std;

class BankAccount{
    int money;
    string acc_num;
        public:

        static int totalAccounts;
        BankAccount()
            {
             money=0;
             acc_num="0000";
             cout<<"Default account created"<<endl;
             totalAccounts++;
            }
        BankAccount(int mon, string num)
            {
             money=mon;
             acc_num=num;
             cout<<"Account "<<acc_num<<" created."<<endl;
             totalAccounts++;
            }
        void display()
            {
             cout<<"Your accout number "<<acc_num<<" has "<<money<<" rupees left."<<endl;
            }
        ~BankAccount()
            {
             cout<<"Account "<<acc_num<<" closed."<<endl;
             totalAccounts--;
            }
        
        
};

int BankAccount::totalAccounts=0;

void checkBalance(BankAccount * a)
    {
     a->display();
    }

int main()
    {
     BankAccount a(42000,"2001"), b(20000000,"2003");

     BankAccount *c = new BankAccount();

     cout<<"The total number of bank accounts registered are "<<BankAccount::totalAccounts<<endl;

     checkBalance(&b);

     delete c;
     
    }