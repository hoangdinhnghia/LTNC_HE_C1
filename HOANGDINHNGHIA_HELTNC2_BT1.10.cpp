#include <iostream>
using namespace std;

int main()
{
	int a=24,b=9,t;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	cout<<a;
}
