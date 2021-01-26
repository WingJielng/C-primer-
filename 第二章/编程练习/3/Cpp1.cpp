#include <iostream>
using namespace std;
int main()
{
	void Three();
	void See();
	Three();
	Three();
	See();
	See();
	return 0;
}
void Three()
{
	cout << "Three blind mice"<<endl;
}
void See()
{
	cout << "See how they run"<<endl;
}
