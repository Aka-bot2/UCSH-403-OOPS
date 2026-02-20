#include<iostream>//standard input-output stream library
using namespace std;//allows usage of cout, cin, endl without writing std::

class Rectangle{//defining and declaring a class called Rectangle
    int length, breadth;//private data members to store length and breadth of the rectangle
    
    public://to make the following members accessible outside the class
        void input()//function to take length and breadth from the user
            {
             cout<<"Enter the length: ";//asks user to enter the length
             cin>>length;//stores the entered length
             cout<<endl<<"Enter the breadth: ";//asks user to enter the breadth
             cin>>breadth;//stores the entered breadth
            }
        int area()//function to calculate area of the rectangle
            {
                return (length*breadth);//returns area using formula length × breadth
            }
        int perimeter()//function to calculate perimeter of the rectangle
            {
                return(2*(length+breadth));//returns perimeter using formula 2 × (length + breadth)
            }
};

int main()
    {
     int a,p;//variables to store area and perimeter values
     Rectangle r1;//creating object r1 of the class Rectangle
     
     r1.input();//calling input function to take dimensions
     a=r1.area();//calling area function and storing the result
     p=r1.perimeter();//calling perimeter function and storing the result

     cout<<endl<<"The area is "<<a<<" and the perimeter is "<<p<<endl;//displaying final results
     return 0;//returns an integer
    }
