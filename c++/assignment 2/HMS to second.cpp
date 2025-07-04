#include<iostream>
using namespace std;

class TimeConverter
{
    int s,h,m;
public:
    void setTimeConverter(int hr,int min,int sec)
    {
        s=sec;
        m=min;
        h=hr;

        s=(3600*h)+(m*60)+s;

    }

    void getTimeConverter()
    {
        cout << "Total second = " <<  s ;
    }


};

int main()
{
    TimeConverter t;
    int s,m,h;
    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter second: ";
    cin >> s;


    t.setTimeConverter(h,m,s);
    t.getTimeConverter();
    return 0;
}