#include<iostream>//standard input-output library
using namespace std;//region of memory where you define the elements

class Input{ //defining and declaring a class called Input
    int a;//this a is a private variable i.e it is accesible by the functions defined in the class alone.
public://to make functions or variables accessible outside the class
    int b;//this is public
    void input()
        {
         cout<<"Enter two numbers (a b) : ";//the object cout
         cin>>a>>b;//the object cin and is used to take 2 inputs simultaneously
        }
    void display(){
        cout<<"\nThe number is "<<a<<endl;//cascaded output operations.
    }
};

int main()
    {
     Input i1;//creating object i1 of the class Input
     i1.input();//calling the function input
     i1.display();//calling the function display.
     //cout<<"\n"<<i1.a;// error: 'a' is a private member of 'Input' || cout<<"\n"<<i1.a;
    }