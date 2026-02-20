#include <iostream>

using namespace std;

 

class CC {

    int* i;  // Dynamic int for deep copy

public:

    CC(int k) {

        i = new int(k);

    }

    CC(const CC& sai) {  // Deep copy constructor

        i = new int(*sai.i);

    }

    void assign(const CC& sai) {  // Simple deep assign function

        delete i;

        i = new int(*sai.i);

    }

    ~CC() {

        delete i;

    }

    int getI() { return *i; }

};

 

int main() {

    CC c1(6);

    cout << "The address of 1st object is  " << &c1 << endl;

    CC c2 = c1;  // Deep copy constructor

    cout << "The address of 2nd object is  " << &c2 << endl;

     

    cout << "c1: " << c1.getI() << ", c2: " << c2.getI() << endl;

    return 0;

}