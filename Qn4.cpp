//Qn 4
#include <iostream>//standard input and output library
using namespace std;//allows us to use standard functions like cout and cin without std::
int main(){//main function
	int a=9,b=3;//declaring and initializing variables a and b
	while(a!=b){//loop runs until a and b become equal
		if(a>b){//checks if a is greater than b
			a=a-b;//subtracts b from a
		}
		else{//executes when b is greater than a
			b=b-a;//subtracts a from b
		}
	}
	cout<<a;//prints the final value of a
	return 0;//returns integer 0
}
