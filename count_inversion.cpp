#include <iostream>
using namespace std;

int main()
{
	int a[10]={1,20,6,4,5},i,j,count=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				count=count+1;
			}
		}
	}
	cout<<"count is:"<<count<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}