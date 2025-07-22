#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Nhap a = ";cin>>a;
	cout<<"NHap b = ";cin>>b;
	cout<<"Nhap c = ";cin>>c;
	
	if(a==b==c)
	{
		cout<<"Day la tam giac deu";
	}else{
		if(a+b>c || a+c>b || b+c>a)
		{
			cout<<"Day la tam giac";
		}else{
			cout<<"Day khong la tam giac";
		}
	}
}
