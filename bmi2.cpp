#include<iostream>//standard input-output stream library

using namespace std;//allows use of cout, cin, endl without writing std::

class BMI{//defining and declaring a class called BMI
    float height,weight;//private data members to store height and weight of the user
    public://to make the following members accessible outside the class
        void input();
        float bmi();
        void lvl();
};

void BMI::input()//function to take height and weight from the user
            {
             cout<<"Enter your weight in kgs and height in m: ";//asks user for weight and height
             cin>>weight>>height;//stores the entered values
             cout<<endl;//adds a blank line for cleaner output
            }
float BMI::bmi()//function to calculate Body Mass Index
            {
                return (weight/(height*height));//returns BMI using formula weight ÷ (height²)
            }
void BMI::lvl()//function to determine BMI category
            {
             if((weight/(height*height))<18.5)//checks if BMI is less than 18.5
                {
                    cout<<"You are underweight"<<endl;//message for underweight category
                }
             else if((weight/(height*height))>=25)//checks if BMI is 25 or more
                {
                    cout<<"You are obese"<<endl;//message for obese category
                }
             else{//executes when BMI is between 18.5 and 24.9
                cout<<"You are healthy"<<endl;//message for healthy category
             }
            }
int main()
    {
     BMI a;//creating object a of class BMI
     float bmi;//variable to store calculated BMI value
     a.input();//calling input function to take user details
     bmi=a.bmi();//calling bmi function and storing the result
     cout<<"Your BMI level is "<<bmi<<endl;//displaying BMI value
     a.lvl();//calling function to display BMI category
     return 0;//indicates successful termination of the program
    }
