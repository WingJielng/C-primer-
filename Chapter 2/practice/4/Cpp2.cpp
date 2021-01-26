#include <iostream>
using namespace std;
int main()
{
	int age_month(int n);
	int age,month;
	cout << "Enter your age : ";
	cin  >>age;
	month=age_month(age);
	cout << "Your age have "<<month<<" month"<<endl;
	return 0;
}
int age_month(int n)
{
	return n*12;
}
