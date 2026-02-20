#include<iostream>
using namespace std;

class AM;//defining class AM so that it is known to SRD
class SRD{
    int marks_SRD=0;//private member var

    public:
        SRD(int m)//parameterized constructor func
            {
             marks_SRD=m;
            }
        friend void total(SRD x,AM y);//friend function total
};

class AM{
    int marks_AM=0;//private var
    public:
        AM(int m1)
            {
             marks_AM=m1;
            }
       friend void total(SRD x,AM y);
};

void total(SRD x, AM y)//objects as parameters
    {
     cout<<"The total is "<<(x.marks_SRD+y.marks_AM)/2<<endl;//printing the totalMarks/2
    }

//Self reliance marks and academic marks. 

int main()
    {
     SRD x(98);//SRD object
     AM y(84);//AM object
     total(x,y);//calling the total function, it doesnt need any . operator because it is not inside any class.
    }