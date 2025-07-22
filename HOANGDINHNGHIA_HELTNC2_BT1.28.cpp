#include <iostream>
#include <cmath>
using namespace std;


double tinh(int n, double x)
{
	return (pow(-1.0,n)*pow(x,n-1)) / n;
}
int main()
{
	double e, x;
	cout<<"Nhap x = ";
	cin>>x;
	cout<<"Nhap e = ";
	cin>>e;
	double tong = 0;
	for(int i=1; 1.0/i>=e ; i++)
	{
		tong+=tinh(i, x);
	}
	cout<<"Tong = "<<tong;
}
