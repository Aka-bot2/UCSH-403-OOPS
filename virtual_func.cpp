#include<iostream>

using namespace std;

class A{

	public:

	//virtual void display() = 0;
    virtual void display()=0; //this is a virtual func, if there is atleast one virtual func in a class then it is said to an abstract class
			};

class B:public A{

	public:

	void display(){

		cout<<"I am in Derived Class B"<<endl;

	}

};

int main(){

	//A a1;

	B b1;

	b1.display();

	return 0;

}

//virtual funcs are used when the functions are declared in parent class and defined in the child class. 