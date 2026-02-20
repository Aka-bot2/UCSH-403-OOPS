//Qn 3
#include <iostream>//standard input and output library
using namespace std;//allows us to use standard functions like cout and cin without std::
int main(){//main function
	int i,j,count;//declaring integer variables
	count=0;//initializing count to 0
	i=0;//initializing i to 0
	for(j=-3;j<=3;i++){//for loop with j as condition variable
		if((j>=0) && (i++))//checks condition and increments i if true
			count=count+j;//adds j to count
	}
	count=count+i;//adds final value of i to count
	cout<<count<<endl;//prints the final value of count
	return 0;//returns integer 0
}
