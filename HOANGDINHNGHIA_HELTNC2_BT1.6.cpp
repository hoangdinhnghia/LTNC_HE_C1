#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap n = ";
	cin>>n;
	int dem = 0;
	int tongchan = 0;
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			tongchan+=i;
			dem++;
		}
	}
	cout<<"Tong = "<<tongchan<<endl;
	cout<<"Trung binh cong so chan = "<<tongchan/dem;
}
