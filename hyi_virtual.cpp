#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "Vehicle constructor called" << endl; }
    void hi()
        {
         cout<<"Hi. "<<endl;
        }
    virtual void display() = 0;
};

// Use 'virtual' to ensure Vehicle is only initialized once
class Car : public Vehicle {
public:
    Car() { cout << "Car constructor called" << endl; }
    void display()
        {
         cout<<"I am a CAR!!"<<endl;
        }
};

class Bus : virtual public Vehicle {
public:
    Bus() { cout << "Bus constructor called" << endl; }
};

// The "Bottom" of the diamond
class TravelMode : public Car, public Bus {
public:
    TravelMode() { cout << "TravelMode constructor called" << endl; }
    void display()
        {
         cout<<"Travellllll "<<endl;
        }
};

int main() {
    TravelMode obj;
    return 0;
}