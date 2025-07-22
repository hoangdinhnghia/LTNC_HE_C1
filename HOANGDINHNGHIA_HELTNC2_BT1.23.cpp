#include <iostream>
using namespace std;

bool nguyento(int n)
{
	if(n<2) return false; 
	for(int i = 2; i<n; i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(nguyento(i))
		{
			cout<<i<<" ";
		}
	}
}
