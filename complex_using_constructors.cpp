    /* C++ Program to add two Complex Numbers */
    #include<iostream>
    using namespace std;
    class Complex{
    private:
        int real; // real part
        int imag;// imaginary part         
	public:
         Complex(int i,int j)//this is done automatically with any function call, parameterized constructor
            {
             real=i,imag=j;
            }
    	
        void display() //Display the complex number
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        } 
        Complex sum(Complex c1,Complex c2) //Return type is an object
        {
	Complex c3(0,0);// Declared to return the object from the function sum
            c3.real=c1.real+c2.real;
            c3.imag=c1.imag+c2.imag;	
	return c3;
        }
        };
    int main()
        {

            Complex c1(4,5),c2(6,7),c3(0,0),c4(0,0); //C4 is declared to store the result returned as object from the function sum 
	    	cout<<"The first complex number"<<endl;
            c1.display();
	    	cout<<"The second complex number"<<endl;
		    c2.display();
            cout<<"Sum of two complex numbers is"<<endl;
            c4=c3.sum(c1,c2); // To store the result
            c4.display();
        return 0;
        }
