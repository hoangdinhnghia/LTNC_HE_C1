#include <iostream>
#include <cmath>
using namespace std;


double giaithua(int n)
{
	long long kq = 1;
	for(int i=n; i>=1; i++)
	{
		kq *= i;
	}
	return kq;
}

double tinh(double x, int e)
{
	double kq = 1;
	for(int i=2; 1.0/giaithua(i)>= e; i++)
	{
		kq += pow(x,i-1) / giaithua(i);
	}
	return kq;
}
int main()
{
	double e, x;
	cout<<"Nhap x = ";
	cin>>x;
	cout<<"Nhap e = ";
	cin>>e;

	cout<<"Ket qua = "<<tinh(x,e);
}
