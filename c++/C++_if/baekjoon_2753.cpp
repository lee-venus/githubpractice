#include <iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;
    year = year%4000;
    if (year%4 == 0 && year%100 !=0)
    {
        cout<<"1";
    }
    else if (year%400 == 0)
    {
        cout<<"1";
    }
    else
        cout<<"0";
    return 0;
}