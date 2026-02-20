#include<iostream>
using namespace std;

class Student {
    int no_of_sub;               // number of subjects for a student
    int arr[20] = {};            // array to store marks
    int total = 0;               // total marks of a student
    static int studentCount;     // static variable to count students

public:
    void input() {
        int i = 0;                                   // loop counter
        studentCount++;                              // increment student count
        cout << "Enter the number of subjects: ";   // ask for number of subjects
        cin >> no_of_sub;                            // take input

        while (i < no_of_sub) {                      // loop through subjects
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> arr[i];                           // store marks
            i++;
        }
        cout << endl;                                // formatting
    }

    int totalMarks() {
        int i = 0;                                   // loop counter
        total = 0;                                   // reset total (important!)
        while (i < no_of_sub) {                      // loop through marks
            total = total + arr[i];                  // sum marks
            i++;
        }
        return total;                                // return total
    }

    int avgMarks() {
        return totalMarks() / no_of_sub;             // calculate average
    }

    static void showStudentCount() {
        cout << "Total number of students: " 
             << studentCount << endl;                // display count
    }
};

// definition of static member
int Student::studentCount = 0;

int main() {
    Student *ptr1 = new Student();                    // dynamically create student
    ptr1->input();                                   // input student data
    cout << "Total marks: " 
         << ptr1->totalMarks() << endl;              // display total
    cout << "Average marks: " 
         << ptr1->avgMarks() << endl;                // display average

    Student *ptr2 = new Student();                    // second student
    ptr2->input();                                   // input student data

    Student::showStudentCount();                      // show total students

    delete ptr1;                                      // free memory
    delete ptr2;                                      // free memory
}
