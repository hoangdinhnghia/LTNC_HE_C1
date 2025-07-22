#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	while (tong<100)
	{
		cout<<"Nhap mot so n="; cin>>n;
		tong += n;
	}
	cout<<"Tong cac so vua nhap la:"<<tong;
	return 0;
}
