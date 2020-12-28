#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	int  arr[]={1,3,10,10,10,34,45};
	int res1,mid,res2;
	int low=0;
	int high=6;
	int x=10;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==x)
		{
			res1=mid;
			high=mid-1;
			//res2=mid;
			//low=mid+1;
		
		}
		else if(arr[mid]>x)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<res1;
	return 0;
}