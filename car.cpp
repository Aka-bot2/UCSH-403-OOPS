#include<iostream>//standard input-output stream library
using namespace std;//allows use of cout, cin, endl without writing std::

class Car{//defining and declaring a class called Car
    float distance_travelled, fuel_used, max_speed, time_taken;//private data members related to car performance
    public://to make the following members accessible outside the class
        void input()//function to take journey and car details from the user
            {
                cout<<"Enter the distance of this journey, fuel_used, max_speed and time_taken_to_reach_max_speed: ";//prompt for inputs
                cin>>distance_travelled>>fuel_used>>max_speed>>time_taken;//taking multiple inputs in a single line
                cout<<endl;//adds a blank line for better output formatting
            }
        float mileage()//function to calculate mileage of the car
            {
             return(distance_travelled/fuel_used);//returns mileage using formula distance ÷ fuel used
            }
        float acceleration()//function to calculate acceleration of the car
            {
                return(max_speed/time_taken);//returns acceleration using formula speed ÷ time
            }
};

int main()
    {
        float mileage, acceleration;//variables to store mileage and acceleration values
        Car honda;//creating object honda of class Car
        honda.input();//calling input function to enter car details
        mileage=honda.mileage();//calling mileage function and storing the result
        acceleration=honda.acceleration();//calling acceleration function and storing the result

        cout<<"This car gives "<<mileage<<" km/l mileage and has an acceleration of "<<acceleration<<" m/s^2"<<endl;//displaying final results
        return 0;//returns integer to main to show it ran successfully
    }
