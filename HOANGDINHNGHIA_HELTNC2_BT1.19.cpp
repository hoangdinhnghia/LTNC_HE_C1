#include <iostream>
#include <cmath>
using namespace std;

bool chinhphuong(int n)
{
	int can = sqrt(n);
	return can * can == n;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(chinhphuong(i))
		{
			cout<<i<<endl;
		}
	}
}
