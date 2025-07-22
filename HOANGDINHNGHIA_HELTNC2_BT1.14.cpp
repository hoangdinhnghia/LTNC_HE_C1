#include <iostream>
using namespace std;

int main()
{
	int dem = 0;
	for(int i=0; i<100; i++)
	{
		cout<<i<<"\t";
		dem++;
		if(dem == 10)
		{
			cout<<endl;
			dem = 0;
		}
	}
}
