#include <iostream>
using namespace std;

double tinh(int n)
{
	return (1.0 / (2*n-1)) - (1.0/(2*n)); 
}

int main()
{
	int n; 
	cin>>n;
	double tong = 0;
	for(int i=1; i<=n; i++)
	{
		tong += tinh(i);
	}
	cout<<tong;
}
