#include<iostream>
using namespace std;

class Vector{
    int x;
    int y;
    public:
        void input()
            {
             cout<<"Enter the x component and y component: "<<endl;
             cin>>x>>y;
            }
        Vector addition(Vector a, Vector b)
            {
                Vector z;
                z.x=a.x+b.x;
                z.y=a.y+b.y;
                return z;
            }
        Vector subtraction(Vector a, Vector b)
            {
                Vector z;
                z.x=a.x-b.x;
                z.y=a.y-b.y;
                return z;
            }
        Vector scalar_mul(Vector a, int c)
            {
                Vector z;
                z.x=c*a.x;
                z.y=c*a.y;
                return z;
            }
        void display()
            {
             cout<<"The vector is ("<<x<<" "<<y<<")"<<endl;
            }
};

int main()
    {
        Vector * ptr1= new Vector();
        Vector * ptr2= new Vector();
        Vector * ptr3= new Vector();
        int c=0;
        ptr1->input();
        ptr2->input();
        cout<<"Input your scalar value: ";
        cin>>c;
        *ptr3=ptr3->addition(*ptr1,*ptr2);
        cout<<"Addition of 2 vectors: "<<endl;
        ptr3->display();
        cout<<"The subtraction of 2 vectors: "<<endl;
        *ptr3=ptr3->subtraction(*ptr1,*ptr2);
        ptr3->display();
        cout<<"The scalar mul of vector : "<<endl;
        *ptr3=ptr3->scalar_mul(*ptr1,c);
        ptr3->display();
        delete ptr1;
        delete ptr2;
        delete ptr3;

    }