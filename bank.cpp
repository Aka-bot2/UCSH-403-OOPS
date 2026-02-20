#include<iostream>//standard input-output stream library
using namespace std;//allows us to use standard functions like cout and cin without std::

class BankAccount{//defining and declaring a class called BankAccount
    int acc_no, bal=0;//private data members: account number and balance (initially set to 0)
    public://to make the following members accessible outside the class
        void input()//function to take account details
            {
                cout<<"Enter your acc_no: ";//asking the user to enter account number
            }
        void checkbal()//function to display the current balance
            {
                cout<<"You have "<<bal<<" left in your "<<acc_no<<endl;//shows balance of the given account
            }
        void withdrawal(int amount)//function to withdraw money from the account
            {   if(bal==0)//checks if balance is zero
                    {cout<<"Your account has nothing to withdraw"<<endl;//message if no money is present
                    return;}//exits the function to avoid further execution
                cout<<"You withdrew "<<amount<<" rupees"<<endl;//confirmation of withdrawal
                bal=bal-amount;//deducts the withdrawn amount from balance
                checkbal();//displays updated balance
                cout<<endl;//adds a blank line for better output formatting
            }
        void deposit(int amount)//function to deposit money into the account
            {
                cout<<"You deposited "<<amount<<" rupees"<<endl;//confirmation of deposit
                bal=bal+amount;//adds the deposited amount to balance
                checkbal();//displays updated balance
                cout<<endl;//adds a blank line for cleaner output
            }
        
};

int main()
    {
        BankAccount b1;//creating object b1 of class BankAccount
        b1.input();//calling input function to enter account details
        b1.deposit(100);//depositing 100 rupees into the account
        b1.checkbal();//displaying the final balance
        return 0; //returns integre to main.
    }
