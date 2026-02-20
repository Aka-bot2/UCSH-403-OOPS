#include<iostream>
using namespace std;

/*
Time
T1, t2 
Hours
Minutes 
Seconds
Display
toSeconds()
toMinutes()
toDays()
*/

class Time{
    int hours=0,mins=0,seconds=0;
    char con;
    public:
        float toSeconds()
            {
             return (hours*3600+mins*60+seconds);
            }
        float toMins()
            {
             return(hours*60+mins+seconds/60);
            }
        float toHours()
            {
             return(hours+mins/60+seconds/3600);
            }
        float input()
            {
             cout<<"Enter the duration to convert (Hours Minutes Seconds): ";
             cin>>hours>>mins>>seconds;
             while(true)
                {cout<<"What do you want to convert it to (h for hours, m for minutes and s for seconds): ";
                cin>>con;
                if(tolower(con)!='h' && tolower(con)!='m' && tolower(con)!='s')
                    continue;
                else
                    break;

                }
             switch (con)
             {
             case 'h':
                return toHours();
             case 'm':
                return toMins();
             case 's':
                return toSeconds();
             }

            }
};

int main()
    {
        Time * ptr= new Time();
        cout<<ptr->input()<<endl;
        delete ptr;
    }