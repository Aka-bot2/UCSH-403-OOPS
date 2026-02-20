#include<iostream>
using namespace std;

class SRD{
    int marks_SRD=0;//private member var

    public:
        SRD(int m)//parameterized constructor func
            {
             marks_SRD=m;
            }
       // void totalMarks(SRD x);//defining the function here
        friend class AM;//declaring the friend Class
};

class AM{
    int marks_AM=0;
    public:
        AM(int m1)
            {
             marks_AM=m1;
            }
        void totalMarks(SRD x)
            {
             cout<<"Your total marks is "<<(x.marks_SRD+marks_AM)/2<<endl;//accessing private var of class SRD.
            }
};


//Self reliance marks and academic marks. 

int main()
    {
     SRD x(98);
     AM y(84);
     y.totalMarks(x);
    }
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						
//		Exam	Proctor	AI	Remote	exam	monitoring	Fair	examinations	Samagra	Shiksha	Abhiyan	Eye/gesture	tracking																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	
