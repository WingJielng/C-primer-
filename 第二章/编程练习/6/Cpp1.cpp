#include <iostream>
using namespace std;
int main()
{
	double light_astronomical(double n);
	double light,astronomical;
	cout << "Enter the number of light years :";
	cin  >> light;
	astronomical = light_astronomical(light);
	cout <<light<<" light years = "<<astronomical<<" astronomical units"<<endl;
	return 0;
}
double light_astronomical(double n)
{
	return n*63240;
}