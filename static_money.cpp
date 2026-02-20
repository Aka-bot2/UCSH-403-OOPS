#include <iostream>              // Includes input-output stream library for cin, cout
using namespace std;             // Allows using standard names without std::

class Money {                    // Defines a class named Money
    int rupees, paise;            // Private data members to store rupees and paise

public:                           // Public section starts
    void input();                 // Function declaration to take input
    static Money add(Money m1, Money m2); // Static function to add two Money objects
    static Money sub(Money m1, Money m2); // Static function to subtract two Money objects
    static Money mul(Money m1, Money m2); // Static function to multiply two Money objects
    void display();               // Function to display Money object
};

void Money::input() {             // Definition of input() function
    cout << "Enter rupees and paise: "; // Prompts user for input
    cin >> rupees >> paise;        // Takes rupees and paise from user
}

Money Money::add(Money m1, Money m2) { // Definition of static add function
    Money temp;                   // Temporary object to store result
    temp.rupees = m1.rupees + m2.rupees; // Adds rupees of both objects
    temp.paise  = m1.paise  + m2.paise;  // Adds paise of both objects
    return temp;                  // Returns the result object
}

Money Money::sub(Money m1, Money m2) { // Definition of static sub function
    Money temp;                   // Temporary object to store result
    temp.rupees = m1.rupees - m2.rupees; // Subtracts rupees of second from first
    temp.paise  = m1.paise  - m2.paise;  // Subtracts paise of second from first
    return temp;                  // Returns the result object
}

Money Money::mul(Money m1, Money m2) { // Definition of static mul function
    Money temp;                   // Temporary object to store result
    temp.rupees = m1.rupees * m2.rupees; // Multiplies rupees of both objects
    temp.paise  = m1.paise  * m2.paise;  // Multiplies paise of both objects
    return temp;                  // Returns the result object
}

void Money::display() {            // Definition of display function
    cout << rupees << "." << paise << endl; // Displays money in rupees.paise format
}

int main() {                       // Main function where program execution starts
    Money m1, m2, m3;              // Creates three Money objects

    m1.input();                    // Takes input for first Money object
    m2.input();                    // Takes input for second Money object

    m3 = Money::add(m1, m2);       // Calls static add function and stores result
    cout << "Adding gives: ";      // Prints label for addition result
    m3.display();                  // Displays addition result

    m3 = Money::sub(m1, m2);       // Calls static sub function and stores result
    cout << "Subtracting gives: "; // Prints label for subtraction result
    m3.display();                  // Displays subtraction result

    m3 = Money::mul(m1, m2);       // Calls static mul function and stores result
    cout << "Multiplying gives: "; // Prints label for multiplication result
    m3.display();                  // Displays multiplication result

    return 0;                      // Ends program successfully
}
