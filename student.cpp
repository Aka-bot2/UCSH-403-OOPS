#include<iostream>
using namespace std;

//StudentMarks
//Student 1, Student 2
//No_of_subjects
//Marks_in_each_subject
//Total_Marks
//Avg_Marks

class Student{
    int no_of_sub,arr[20]={},total=0;

    public:
        void input()
            {
             int i =0;
             cout<<"Enter the number of subjects: ";
             cin>>no_of_sub;
             while(i<no_of_sub)
                {
                    cout<<"Enter mark's of subject "<<i+1<<":";
                    cin>>arr[i];
                    i=i+1;
                }
             cout<<endl;
            }
        int totalMarks()
            {
             int i =0;
             while(i<no_of_sub)
                {
                 total=total+arr[i];
                 i=i+1;
                }
             return total;
            }
        int avgMarks()
            {
             return(total/no_of_sub);
            }
};

int main()
    {
     Student *ptr= new Student();
     ptr->input();
     cout<<"The total marks of the student is "<<ptr->totalMarks()<<endl;
     cout<<"The average marks of the student is "<<ptr->avgMarks()<<endl;
     delete ptr;
    }