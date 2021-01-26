#include <iostream>
using namespace std;
int main()
{
	double Celsius_Fahrenheit(double n);
	double Celsius,Fahrenheit;
	cout << "Please enter a Celsius valus :";
	cin  >> Celsius;
	Fahrenheit = Celsius_Fahrenheit(Celsius);
	cout <<Celsius<<" degrees Celsius is "<<Fahrenheit<<" degrees Fahrenheit"<<endl;
	return 0;
}
double Celsius_Fahrenheit(double n)
{
	return 1.8*n+32;
}