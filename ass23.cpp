/*
Problem 4: Car Parking System
Develop a Car class to manage vehicles in a parking lot. Default constructor sets color to "White"
and slot to 0,
printing "Default car parked". Parameterized constructor takes string color and int slot, 
printing "Car [color] parked
in slot [slot]". Destructor prints "Car left slot [slot]".
 Track total parked cars using static int carsParked. Provide
member function info() for car details and global function parkCar(Car &c) passing by reference.
Demonstrate static allocation alongside dynamic objects created with new and deleted properly.
*/

#include<iostream>
using namespace std;

class Car{
    string color;
    int slot;

    public:
        static int count;

        Car()
            {
             color="white";
             slot=0;
             cout<<"Default car parked"<<endl;
             count++;
            }
        Car(string c, int s)
            {
             color=c;
             slot=s;
             count++;
             cout<<"Car "<<color<<" parked"<<endl;
            }
        void info()
            {
             cout<<"The color of the car parked is "<<color<<" and it is in slot "<<slot<<endl;
            }
        ~Car()
            {
             cout<<"Car left slot "<<slot<<endl;
             count--;
            }
};

int Car::count=0;

void parkCar(Car * c)
    {
     c->info();
    }

int main()
    {
     Car c1,c2("black",6);
     Car * c3 = new Car("red",7);
     cout<<"There are "<<Car::count<<" cars parked."<<endl;
     parkCar(&c1);
     parkCar(c3);
     delete c3;
    }
