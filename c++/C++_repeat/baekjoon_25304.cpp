#include <iostream>
using namespace std;

int main()
{
    int X;
    int N;
    int a,b;
    cin>>X;
    cin>>N;
    int temp = 0;
    for (int i = 0; i<N; i++)
    {
        cin>>a>>b;
        temp += a*b;
    }
    if (X==temp)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}