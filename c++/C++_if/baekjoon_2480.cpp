#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int prize;
    cin>>a>>b>>c;
    if (a==b && b==c)
    {
        prize = 10000 + a*1000;
    }
    else if (a==b || a==c)
    {
        prize = 1000+a*100;
    }
    else if (b==c)
    {
        prize = 1000+b*100;
    }
    else
    {
        if (a>b && a>c)
        {
            prize = a*100;
        }
        else if (b>a && b>c)
        {
            prize=b*100;
        }
        else
        {
            prize = c*100;
        }
        
        
        /*if (a>b)
        {
            if (b>c)
            {
                prize = a*100;
            }
            else if (c>a)
            {
                prize = c*100;
            }
        }
        else
        {
            if (b>c)
            {
                prize = b*100;
            }
            else
            {
                prize = c *100;
            }
        }*/
    }
    
    cout<<prize;
    return 0;
}