#include <iostream>
using namespace std;


double tinh(int n)
{
	return (1.0/(2*n-1)) - (1.0/(2*n));
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
