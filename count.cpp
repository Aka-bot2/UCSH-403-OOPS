#include<iostream>
using namespace std;

class Student{
    static int created;
    static int deleted;
    public:
    static void create()
        {
         created++;
        }
    static void del()
        {
         deleted++;
         created--;
        }
    static void show_count()
        {
         cout<<"The count of created objects is "<<created<<endl;
         cout<<"The count of deleted objects is "<<deleted<<endl;
        }
};

int Student::created;
int Student::deleted;

int main(){
    Student *ptr1 = new Student();
    Student::create();
    Student *ptr2 = new Student();
    Student::create();
    Student *ptr3 = new Student();
    Student::create();
    delete ptr3;
    Student::del();

    Student::show_count();
    delete ptr2;
    delete ptr1;

}