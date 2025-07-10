#include <iostream>
using namespace std;

class P
{
protected:
    float t;
};
class Q : public P
{
protected:
    float fehrenheit;
public:
    void setFehrenheit()
    {
        cout << "Enter temperature in celsius:";
        cin >> t;
    }
    void getFehrenheit()
    {
        fehrenheit = (1.8*t)+32;
        cout<< "Fehrenheit" << "is" << " " << fehrenheit  << endl;
    }
};
class R : public Q
{
private:
    float kelvin;
public:
    void getkelvin()
    {
        setFehrenheit();
        getFehrenheit();
        fehrenheit=(1.8*t)+32;
        kelvin=((fehrenheit-32)*5/9)+273.15;
        cout<< "kelvin" << "is" << " " << kelvin << endl;
    }
};
int main()
{
    R k1;
    k1.getkelvin();

    return 0;
}

