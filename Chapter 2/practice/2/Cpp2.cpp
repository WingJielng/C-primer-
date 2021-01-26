#include <iostream>
using namespace std;
int main()
{
	double long_chang(double n);
	double n,result;
	cout << "Please enter the distance : ";
	cin  >> n;
	result = long_chang(n);
	cout << n <<" long = "<<result<<" code"<<endl;
	return 0;
}
double long_chang(double n)
{
	return 220*n;
}
