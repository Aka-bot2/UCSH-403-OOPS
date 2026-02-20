#include<iostream>
using namespace std;

/*
Computer
Dell, HP, Lenovo
Processor
GPU
RAM
Estimated_Cost
Display
*/

class Computer{
    string brand;
    float speed;

    public:
        void input()
            {
             cout<<"Enter the brand name: "<<endl;
             cin>>brand;
             cout<<"Enter processor speed: "<<endl;
             cin>>speed;
            }
        void estimated_cost()
            {
             if(speed<=2.5)
                cout<<"It must be around 30000 rupees "<<endl;
             else if (speed<=3.20)
                cout<<"It must be around 60000 rupees "<<endl;
             else
                cout<<"It must be more than 90000 rupees "<<endl;
            }
        void display()
            {
             cout<<"You have a "<<brand<<" which has a processor speed of "<<speed<<endl;
            }
};

int main()
    {
     Computer * ptr = new Computer();
     ptr->input();
     ptr->estimated_cost();
     ptr->display();
     delete ptr;
    }