#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap thang: ";
	cin>>n;
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	{
		cout<<"Thang "<<n<<" co 31 ngay";
	}else{
		if(n==2)
		{
			cout<<"Thang "<<n<<" co 28 hoac 29 ngay";
		}else{
			cout<<"Thang "<<n<<" co 30 ngay";
		}
	}
}
