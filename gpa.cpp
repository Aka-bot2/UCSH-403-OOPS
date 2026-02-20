#include<iostream>
using namespace std;

/*
GPA
Student1, Student2
Credits
Internals
Externals
GPA
Grade
*/

class Gpa{
    int no_of_courses=0;
    float credits[20]={}, internals[20]={}, externals[20]={},gpa=0;
    public:
        void input()
            {
             cout<<"Enter the number of courses: ";
             cin>>no_of_courses;
             int i=0;
             while(i<no_of_courses)
                {
                 cout<<"Enter credit of subject "<<i+1<<":";
                 cin>>credits[i];
                 cout<<"Enter the internals marks of subject "<<i+1<<":";
                 cin>>internals[i];
                 cout<<"Enter the externals marks of subject "<<i+1<<":";
                 cin>>externals[i];
                 i=i+1;
                }
             
            }
        float gpa_cal()
            {
             float tgpa=0;
             int i=0,total_creds=0;
             while(i<no_of_courses)
                {
                 total_creds=total_creds+credits[i];
                 tgpa=tgpa+(credits[i]*(internals[i]/2+externals[i]/2)/10);
                 i=i+1;
                }
             gpa=tgpa/total_creds;
             return gpa;
            }
        void grade()
            {
             if(gpa>=9)
                 cout<<"You got an O+ grade"<<endl;
             else if(gpa>=8)
                cout<<"You got an O grade"<<endl;
             else if (gpa>=7)
                cout<<"You got an A+ grade"<<endl;
             else if(gpa>=6)
                cout<<"You got an A grade"<<endl;
             else
                cout<<"You got less than A grade"<<endl;
            }

};

int main()
    {
     Gpa *ptr= new Gpa();
     ptr->input();
     cout<<"You got a GPA of "<< ptr->gpa_cal() << " and a grade of ";
     ptr->grade();
     delete ptr;
    }