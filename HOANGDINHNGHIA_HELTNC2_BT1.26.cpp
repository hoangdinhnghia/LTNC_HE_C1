#include <iostream>
#include <cmath>
using namespace std;


double tinh(int n)
{
	return (pow(-1.0,n-1))/(n);
}
int main()
{
	double e;
	cin>>e;
	double tong = 0;
	for(int i=1; 1.0/i>=e ; i++)
	{
		tong+=tinh(i);
	}
	cout<<"Tong = "<<tong;
}
