#include <iostream>
using namespace std;

int main()
{
	double e;
	cin>>e;
	double tong = 0;
	for(int i=1; 1.0/i>=e ; i++)
	{
		tong += (1.0/i);
	}
	cout<<"Tong = "<<tong;
}
