#include <iostream>
using namespace std;

class X
{
protected:
    int x,y,z;
};
class Y : public X
{
    int sum;
public:
    void sety()
    {
        cout << "Enter x:";
        cin >> x;
        cout << "Enter y:";
        cin >> y;
        cout << "Enter z:";
        cin >> z;
    }
    void gety()
    {
        sum=(x*x*x)+(y*y*y)+(z*z*z);
        cout<< "cubesum of " << x << " " << y << " " << z << " is " << sum << endl;
    }
};
int main()
{
    Y c1;
    c1.sety();
    c1.gety();

    return 0;
}