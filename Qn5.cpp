//Question 5
#include <iostream>//standard input and output library
using namespace std;//allows us to use standard functions like cout and cin without std::
int funcp() {//function that demonstrates static variable behavior
    static int x = 1;//static variable, retains value between calls
    x++;//increments x by 1
    return x;//returns current value of x
}
int main() {//main function
    int x, y;//declaring integer variables x and y
    x = funcp();//calls funcp(), assigns returned value to x
    y = funcp()+x;//calls funcp() again, adds x to the returned value, assigns to y
    cout << (x+y)<<endl;//prints the sum of x and y
    return 0;//returns integer 0
}
