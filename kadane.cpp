#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a[10]={-2,-3,4,-1,-2,1,5,-3};
	int sum=0,max=a[0];
	for(int i=0;i<=8;i++)
	{
		sum=sum+a[i];
		if(sum<0)
		{

			if(sum>max)
			{
				max=sum;
			}
		sum=0;
			
		}
		if(sum>max)
		{
			max=sum;
		}

	}
	cout<<"max sum is:"<<max;
	
	return 0;
}