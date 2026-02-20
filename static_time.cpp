#include<iostream>
using namespace std;

/*
Time
T1, T2
Hours
Minutes
Seconds
Display
toSeconds()
toMinutes()
toHours()
*/

class Time {
    int hours = 0, mins = 0, seconds = 0;   // stores time values
    char con;                               // stores conversion choice

public:
    // static conversion functions
    static float toSeconds(int h, int m, int s) {
        return (h * 3600 + m * 60 + s);     // convert to seonds
    }

    static float toMins(int h, int m, int s) {
        return (h * 60 + m + s / 60.0);     // convert to minutes
    }

    static float toHours(int h, int m, int s) {
        return (h + m / 60.0 + s / 3600.0); // convert to hours
    }

    float input() {
        cout << "Enter the duration (Hours Minutes Seconds): ";
        cin >> hours >> mins >> seconds;    // inputs time

        while (true) {
            cout << "Convert to (H/h-hours, M/m-minutes, S/s-seconds): ";
            cin >> con;

            if (con == 'h' || con == 'H' ||
                con == 'm' || con == 'M' ||
                con == 's' || con == 'S')
                break;
        }

        switch (con) {
            case 'h':
            case 'H':
                return Time::toHours(hours, mins, seconds);

            case 'm':
            case 'M':
                return Time::toMins(hours, mins, seconds);

            case 's':
            case 'S':
                return Time::toSeconds(hours, mins, seconds);
        }

        return 0; 
    }
};

int main() {
    Time *ptr = new Time();                 
    cout << ptr->input() << endl;           
    delete ptr;                             
}
