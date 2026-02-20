/* C++ Program to add two Complex Numbers */

    #include<iostream>

    using namespace std;

    class Complex{

    private:

        int real;

        int imag;

         /* Function to set the values of

          * real and imaginary part of each complex number

          */

                public:

        Complex()//constructor function and it should be first in the member functions list.
            {
             cout<<"I created an object"<<endl;
             real=1,imag=0;
            }
         void setvalue()

        {

            cin>>real;

            cin>>imag;

        }

                /* Function to display the sum of two complex numbers */

        void display()

        {

            cout<<real<<"+"<<imag<<"i"<<endl;

        }

                /* Function to add two complex numbers */

 

        Complex sum(Complex c1,Complex c3) //.return type is object ,1. objects as parameters

        {

                Complex c2;

            c2.real=c3.real+c1.real; // Reference variable usage

            c2.imag=c3.imag+c1.imag;// by default this pointer points to the current object

                return c2;

        }
        ~Complex()//constructor function
            {
             cout<<"Object is destroyed!!!"<<endl;
            }

        };

int main()

 

        {

            Complex c1,c2,c3;
            c1.display();
            c2.display();
            c3.display();

            cout<<"Enter real and imaginary part of first complex number"<<endl;

            c1.setvalue();

 

            cout<<"Enter real and imaginary part of second complex number"<<endl;

 

            c3.setvalue();

 

            cout<<"Sum of two complex numbers is"<<endl;

 

            c2=c2.sum(c1,c3);

 

            c2.display();

 
            cout<<endl<<sizeof(Complex)<<" bytes"<<endl;
        return 0;

 

        }