#include<iostream>//standard library
using namespace std;//to access cin and cout from standard library without ::std

int main()
    {
        string str;//Null character is automatically inserted after the string and does not limit size of string unlike the string made with array 
        cout<<"Enter your string: ";
        cin>>str; //reading user input without delimiter
        cout<<"Your string was "<<str<<endl;
        return 0;//returning an int from main.
    }