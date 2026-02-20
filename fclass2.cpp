#include<iostream>
using namespace std;

class SRD{
    int SRD_marks;

    public:
        SRD(int x)
            {
             SRD_marks=x;
            }
        ~SRD()
            {
             cout<<"Object deleted."<<endl;
            }
        friend class TotalMarks;
};

class AM{
    int AM_marks;

    public:
        AM(int x)
            {
             AM_marks=x;
            }
        ~AM()
            {
             cout<<"Object deleted"<<endl;
            }
        friend class TotalMarks;
};

class TotalMarks{
    int total_marks;

    public:
        TotalMarks(AM a, SRD b)
            {
             total_marks=(a.AM_marks+b.SRD_marks)/2;
             cout<<"The total marks is "<<total_marks<<endl;
            }
        ~TotalMarks()
            {
             cout<<"Object deleted."<<endl;
            }
};

int main()
    {
     AM a(84);
     SRD b(95);
     TotalMarks c (a,b);
    }