#include <iostream>
using namespace std;

int main()
{
	int hour;
	int minute;

	cin >> hour;
	cin >> minute;

	if (hour == 0)
	{
		if (minute >= 45)
		{
			cout << hour << ' ' << minute - 45;
		}
		else
		{
			cout << 23 << ' ' << 60 - abs(minute - 45);
		}
	}
	else
	{
		if (minute >= 45)
		{
			cout << hour << ' ' << minute - 45;
		}
		else
		{
			cout << hour-1 << ' ' << 60 - abs(minute - 45);
		}
	}
	return 0;
}
