#include <iostream>
using namespace std;

int main()
{
	int n=23, x=0;
	do
	{
		x = x*10;
		x = x + n%10;
		n=n/10;
	}while(n!=0);
	cout<<x;
}
