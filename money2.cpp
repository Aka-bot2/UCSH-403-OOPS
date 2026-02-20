#include <iostream> // standard input-output stream library
using namespace std; // allows direct use of cout, cin, endl

class Money {
    int rupees, paise; // private data members

public:
    void input();                             // takes input
    Money add(Money m1, Money m2);            // adds two objects
    Money sub(Money m1, Money m2);            // subtracts two objects
    Money mul(Money m1, Money m2);            // multiplies two objects
    void display();                           // displays result
};

void Money::input() {
    cout << "Enter rupees and paise: ";
    cin >> rupees >> paise;                   // user input
}

Money Money::add(Money m1, Money m2) {
    Money temp;                              // temp object for result
    temp.rupees = m1.rupees + m2.rupees;     //adds rupees part of the two money objects
    temp.paise  = m1.paise  + m2.paise;      //adds paise part of the two money objects
    return temp;
}

Money Money::sub(Money m1, Money m2) {
    Money temp;
    temp.rupees = m1.rupees - m2.rupees;    //subtracts rupees part of the two money objects
    temp.paise  = m1.paise  - m2.paise;     //subtracts paise part of the two money objects
    return temp;
}

Money Money::mul(Money m1, Money m2) {
    Money temp;
    temp.rupees = m1.rupees * m2.rupees;    //multiplies rupees part of the two money objects
    temp.paise  = m1.paise  * m2.paise;     //multiplies rupees part of the two money objects
    return temp;
}

void Money::display() {
    cout << rupees << "." << paise << endl;   // prints the object in the proper money format
}

int main() {
    Money m1, m2, m3;                         // money object creation

    m1.input();                               // first input
    m2.input();                               // second input

    m3 = m3.add(m1, m2);                      // addition
    cout << "Adding gives: ";
    m3.display();

    m3 = m3.sub(m1, m2);                      // subtraction
    cout << "Subtracting gives: ";
    m3.display();

    m3 = m3.mul(m1, m2);                      // multiplication
    cout << "Multiplying gives: ";
    m3.display();

    return 0;                                 // returning 0 from main
}
