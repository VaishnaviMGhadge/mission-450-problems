#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a []={23,29,15,19,31,7,9,5,2},i,j,gap;
	int n=sizeof(a)/sizeof(a[0]);
	for ( gap=n/2 ; gap>=1;gap= gap/2)
	{
		for(j=gap;j<9;j++)
		{
			for(i=j-gap;i>=0;i=i-gap)
			{
				if(a[i+gap]>a[i])
				{
					break;
				}
				else
				{
					swap(a[i+gap],a[i]);
				}
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;
	
}