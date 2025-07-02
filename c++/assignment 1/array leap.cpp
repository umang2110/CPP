#include<iostream>
using namespace std;

int main()
{
    int start,end,count=0,j=0;
    cout <<"Enter starting year: ";
    cin >> start;
    cout << "Enter ending year: ";
    cin >> end;

    for(int i=start; i<=end; i++)
    {
        if(i%4==0)
        {
            count++;
        }
    }
    int a[count];
    for(int i=start; i<=end; i++)
    {
        if(i%4==0)
        {
            a[j]=i;
            cout << a[j] << " ";
            j++;
        }
    }



    return 0;
}