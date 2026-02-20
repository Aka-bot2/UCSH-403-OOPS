//Question 6
#include <iostream>//standard input and output library
using namespace std;//allows us to use standard functions like cout and cin without std::
int foo(int x, int y, int q) {//recursive function with three parameters
    if ((x<=0) && (y<=0))//checks if both x and y are non-positive
        return q;//returns q if both are non-positive
    if (x<=0)//checks if x is non-positive
        return foo(x,y-q,q);//recursively calls foo with reduced y
    if (y<=0)//checks if y is non-positive
        return foo(x-q,y,q);//recursively calls foo with reduced x
    return foo(x, y-q,q)+foo(x-q,y,q);//recursively calls foo in both directions and sums results
}
int main() {//main function
    int r=foo(15, 15, 10);//calls foo with initial values and stores result in r
    cout<<r;//prints the final result
    return 0;//returns integer 0
}
