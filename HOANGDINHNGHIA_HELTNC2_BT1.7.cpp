#include <iostream>
using namespace std;
int main()
{
	int n;
	double x, tong=0;
	cout<<"Bao nhieu so can nhap vao n=";cin>>n;
	for(int i=0; i<n;i++)
	{
		cout<<"Nhap so thu "<<i+1<<" =";cin>>x;
		tong +=x;
	}
	cout<<endl<<"Trung binh cong cua "<<n<<" so la:"<<tong/n;
	return 0;
}
