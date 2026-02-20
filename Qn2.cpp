//Qn 2
#include <iostream>//standard input and output library
using namespace std;//allows us to use standard functions like cout and cin without std::
int main(){//main function
	float sum=0.0;//variable to store the running sum
	float j=1.0;//denominator variable, starts with 1
	float i=2.0;//numerator variable with fixed value 2
	while(i/j>0.0625){//loop runs while the condition is true
		j=j+j;//doubles the value of j
		sum=sum+i/j;//adds the current term to sum
		cout<<sum<<endl;//prints sum after each iteration
	}
	return 0;//returns integer 0
}
