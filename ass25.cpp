/*
Problem 3: Student Record System
Create a Student class for maintaining student records. Default constructor sets name to "Unknown" and marks to
0, printing "Default student added". Parameterized constructor accepts string name and int marks, printing
"Student [name] added". Destructor prints "Student [name] left". Maintain static int studentCount across all
objects. Include member function print() to show student details and global function printRecord(Student s)
passing by value. Use both static objects and new/delete for dynamic objects in demonstration.
*/

#include<iostream>
using namespace std;

class Student{
    int marks=0;
    string name;
        public:

        static int studentCount;
        Student()
            {
             marks=0;
             name="Unknown";
             cout<<"Default item added"<<endl;
             studentCount++;
            }
        Student(int p, string n)
            {
             marks=p;
             name=n;
             cout<<"Item "<<name<<" added."<<endl;
             studentCount++;
            }
        void print()
            {
             cout<<"The student is "<<name<<" and he/she got "<<marks<<endl;
            }
        ~Student()
            {
             cout<<"Item "<<name<<" left."<<endl;
             studentCount--;
            }
        
        
};

int Student::studentCount=0;

void printRecord(Student a)
    {
     a.print();
    }

int main()
    {
     Student a, b(100,"Sai");

     Student *c = new Student(98,"Krishna");

     cout<<"This is the current student count :"<<Student::studentCount<<endl;

     printRecord(b);

     delete c;
     
    }