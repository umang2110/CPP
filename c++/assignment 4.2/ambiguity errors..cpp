#include <iostream>
using namespace std;

class ClassA {
public:
    void display() {
        cout << "This is class A" << endl;
    }
};

class ClassB {
public:
    void display() {
        cout << "This is Class B" << endl;
    }
};

class ClaasC : public ClassA, public ClassB {
public:
    void show() {
        ClassA::display();
        ClassB::display();
    }
};


int main() {
    ClaasC obj;
    obj.show();
    return 0;
}

