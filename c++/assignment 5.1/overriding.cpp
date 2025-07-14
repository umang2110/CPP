#include <iostream>
using namespace std;

class Cricket {
public:
    void getTotalOvers() {
        cout << "Total overs depend on the match type." << endl;
    }
};

class T20Match : public Cricket {
public:
    void getTotalOvers() {
        cout << "T20 Match: 20 overs " << endl;
    }
};

class ODIMatch : public Cricket {
public:
    void getTotalOvers() {
        cout << "ODI Match: 50 overs " << endl;
    }
};

int main() {
    Cricket c;
    T20Match t20;
    ODIMatch odi;

    c.getTotalOvers();    
    t20.getTotalOvers();   
    odi.getTotalOvers();   

    return 0;
}

