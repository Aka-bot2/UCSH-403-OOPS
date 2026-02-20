#include<iostream>//standard library
using namespace std;//to access objects such as cin and cout
int main(){ //main is going to return a integer
    char str[50];//the null character is the 50th element
    cout<<"Enter your string: ";
    cin>>str;//this only takes in a word till the first white space character
    cout<<"Your string is "<<str[0]<<endl;//endl is for newline
    return 0;//returns int from main
}