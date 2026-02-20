#include<iostream>
using namespace std;

/*
A Company X has three subbranches ( A,B,C ) 
situated at three different places.
The company possess an initial capital of Rs 50 Lakhs.
For the financial year 2025-26,A requires 15 Lakhs,
B requires 14 lakhs and C requires 9 Lakhs for their respective operations.
Accordingly the company allocates the funds required at each sub-branch.
After all the allocations ,how much is left with the Company.
*/

class Company{

    public:
    static int capital;
    static void allocate(int m){
        capital=capital-m;
    }
    void bal()
        {
         cout<<"The company has Rs "<<capital<<" Lakhs left"<<endl;
        }
};

int Company::capital=50;

int main()
    {
     Company A,B,C;
     A.allocate(15);
     B.allocate(14);
     C.allocate(9);
     C.bal();
    }