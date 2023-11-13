#include <iostream>
using namespace std;

int main()
{
    int hour;
    int minute;
    int time;
    
    cin>>hour>>minute;
    cin>>time;
    
    minute += time;
    
    if (minute >=60)
    {
        hour +=(minute/60);
        minute %=60;
        if (hour >= 24)
        {
            hour -= 24;
        }
    }
    cout<<hour<<' '<<minute;
    return 0;
}