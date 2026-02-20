/*
 Problem 5: Library Book System
Build a Book class for library book catalog management. Default constructor initializes title 
to "No Title" and pages
to 0, printing "Default book added". 
Parameterized constructor takes string title and int pages, printing "Book
[title] added". Destructor prints "Book [title] returned". Use static int totalBooks to count 
library collection size.
Include member function showBook() for book details and 
global function displayBook(Book b) passing by value.
Show usage with static objects and dynamic objects using new/delete operators.
*/

#include<iostream>
using namespace std;

class Book{
    string title;
    int pages=0;

    public:
        static int count;

        Book()
            {
             title="No title";
             pages=0;
             cout<<"Default book added"<<endl;
             count++;
            }
        Book(string t, int p)
            {
             title=t;
             pages=p;
             cout<<"Book "<<title<<" added."<<endl;
             count++;
            }
        void showBook()
            {
             cout<<"The name of the book is "<<title<<" and it has "<<pages<<" pages"<<endl;
            }
        ~Book()
            {
             cout<<"Book "<<title<<" returned."<<endl;
             count--;
            }
};

int Book::count=0;

void displayBook(Book b)
    {
     b.showBook();
    }

int main()
    {
     Book a,b("Harry potter",400),c("Bhagavatha Vahini",250),d("C++ Complete reference",1000);


     Book * e = new Book();
     cout<<"The total number of books are "<<Book::count<<endl;
     displayBook(a);
     displayBook(c);
     displayBook(d);
     delete e;
    }