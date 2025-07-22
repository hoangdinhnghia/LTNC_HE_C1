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
	if(chinhphuong(n))
	{
		cout<<n<<" la so chinh phuong"<<endl;
	}else{
		cout<<n<<" khong phai so chinh phuong"<<endl;
	}
	for(int i=1; i<=100; i++)
	{
		if(chinhphuong(i))
		{
			cout<<i<<endl;
		}
	}
}
