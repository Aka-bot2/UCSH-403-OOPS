#include<iostream>
using namespace std;

int max_books_allowed=2;

class Person{
    protected:
    int id;
    string name;

    public:
        Person(string n)
            {
             name=n;
            }
        void reg()
            {
             
            }
        void display_info()
            {
             cout<<"His name is "<<name;
            }
};

class Student : public Person{
    int books_issued=0;
    int reg_no=0;

    public:
        Student (int issues,int reg, string n):Person(n)
            {
             books_issued=issues;
             reg_no=reg;
            }
        bool canIssue()
            {
             
            }
        void issueBook(){

        }
        void returnBook(){

        }
    
        void display()
            {
                if(books_issued==0)
                    cout<<"Your id is "<<reg_no<<". "<<name<<", you have no books issued."<<endl;
                if(books_issued==1)
                    cout<<"Your id is "<<reg_no<<". "<<name<<", you have issued "<<books_issued<<" book."<<endl;
                else
                    cout<<"Your id is "<<reg_no<<". "<<name<<", you have issued "<<books_issued<<" books."<<endl;
            }
        friend class Librarian;
};

class Book{
    int Book_id;
    int pages;
    string title;
    string author;
    bool isIssued;

    public:
        void display()
            {
             
            }
};

class Librarian: public Person{
    int lib_id;
    int salary;

    public:
        void add_book(){

        }
        void remove_book(){

        }
};

class Library{

};
