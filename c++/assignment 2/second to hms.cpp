#include<iostream>
using namespace std;

class TimeConverter
{
    int s,h,m;
public:
    void setTimeConverter(int sec)
    {
        s=sec;
        if(s>=3600)
        {
            h=s/3600;
            m=s%3600;
            m=m/60;
            s=s%60;
        }
        else
        {
            h=0;
            m=s/60;
            s=s%60;
        }


    }

    void getTimeConverter()
    {
        cout << "HH:MM:SS = " << h << ":"<< m << ":"<< s ;
    }


};

int main()
{
    TimeConverter t;
    int sec;
    cout << "Enter second: ";
    cin >> sec;


    t.setTimeConverter(sec);
    t.getTimeConverter();
    return 0;
}