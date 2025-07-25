//1. Create a class `Student` with private attributes `name`, `rollNumber`, and a parameterized constructor. 
//   Demonstrate the instantiation of objects using this constructor with help of array.

#include<iostream>
using namespace std;

class Student {

    int rollNumber;
    string name;

public:
    Student() {}

    Student(int r, string n) {
        rollNumber = r;
        name = n;
    }

    void setStudent() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter name: ";
        cin >> name;
    }

    void getStudent() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;

    Student students[100]; 

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].setStudent();
    }

    cout << "\nStudent Details   \n";
    for (int i = 0; i < n; i++) {
        students[i].getStudent();
    }

    return 0;
}

