#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x;
	int n;
	cout<<"Nhap x = "; cin>>x;
	cout<<"NHap n = "; cin>>n;
	
	float S = 1;
	for(int i=1; i<=n; i++)
	{
		S += pow(x,i) / (i+1);
	}
	cout<<"S = "<<S;
}
