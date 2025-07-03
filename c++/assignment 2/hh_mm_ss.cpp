#include<iostream>
using namespace std;


int main()
{
    int s,h,m,s1;
    cout << "Enter second: ";
    cin >> s;

    if(s>=3600)
    {
        h=s/3600;
        s1=s%3600;
        m=s1/60;
        s=s%60;
        cout << h << ":" << m << ":" << s << endl;
    }
    else
    {
        m=s/60;
        s=s%60;
        cout << "00:" << m << ":" << s << endl;
    }

    return 0;
}