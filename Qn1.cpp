//Qn 1

#include<iostream> //standard input and output library
using namespace std; ///allows us to use standard functions like cout and cin without std::
int main(){//main function
	int a=6;//declaring and defining an int variable a
	int b=0;//declaring and defining an int variable b
	while(a<10){//while loop
		a=a/12+1;
		a=a+b;
	}
	cout<<a;//prints the final value of a
	return 0;//returns integer 0
} 