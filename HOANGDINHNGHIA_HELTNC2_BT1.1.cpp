#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, delta = 0;
	cout<<"Nhap a = ";cin>>a;
	cout<<"NHap b = ";cin>>b;
	cout<<"Nhap c = ";cin>>c;
	
	if(a==0)
	{
		cout<<"a phai khac 0";	
	}
	else{
		delta = b*b - 4*a*c;
		if(delta < 0)
		{
			cout<<"Phuong trinh vo nghien";
		}
		if(delta == 0)
		{
			cout<<"Phuong trinh co nghiem kep = "<<-b/(2*a);
		}
		if(delta > 0)
		{
			cout<<"Phuong trinh co hai nghiem: "<<(-b + sqrt(delta))/(2*a)<<" va: "<<(-b - sqrt(delta))/(2*a);
		}
	}
}
