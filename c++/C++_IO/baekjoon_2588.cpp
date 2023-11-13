#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int m1, m2, m3;
    cin >> a >> b;

    m1 = a*(b % 10);
    m2 = a*((b / 10)%10);
    m3 = a*((b / 100)%10);
    cout << m1 << endl;
    cout << m2<<endl;
    cout << m3<<endl;
    cout << 100*m3 + 10*m2 + m1<<endl;


    return 0;
}