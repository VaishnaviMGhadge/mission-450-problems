#include <iostream>
using namespace std;

int main()
{
	int a[10]={1,5,7,1},sum=6,count=0;
	for(int i=0;i<=3;i++)
	{
		for(int j=i+1;j<=3;j++)
		{
			if(a[i]+a[j]==sum)
			{
				count=count+1;
			}
		}
	}
	cout<<count;
	return 0;
}