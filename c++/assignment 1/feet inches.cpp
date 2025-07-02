#include<iostream>
using namespace std;

int main()
{
    float inch,feet;
    cout << "Enter feet; ";
    cin >> feet;
    cout << "Enter inch: ";
    cin >> inch;
    while(inch>=12)
    {
        inch=inch-12;
        feet++;
    }
    cout << "Feet- " << feet << " inches- " << inch;
    return 0;
}