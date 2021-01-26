#include <iostream>
using namespace std;
int main()
{
	void Time(int x,int y);
	int hours,minutes;
	cout <<"Enter the number of hours :";
	cin  >>hours;
	cout <<"Enter the number of minutes :";
	cin  >>minutes;
	Time(hours,minutes);
	return 0;
}
void Time(int x,int y)
{
	cout <<x<<":"<<y<<endl;
}