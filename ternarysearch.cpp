#include <iostream>
#include <stdio.h>
using namespace std;

int ternarysearch(int arr[],int low,int high,int search)
{
	if(high>=low)
	{
		int mid1=low+(high-low)/3;
		int mid2=high-(high-low)/3;
		if(arr[mid1]==search)
		{
			return arr[mid1];
		}
		if(arr[mid2]==search)
		{
			return arr[mid2];
		}
		else if( search <arr[mid1])
		{
			 return ternarysearch(arr,low,mid1-1,search);
		}
		else if(search>arr[mid2])
		{
			return ternarysearch(arr,mid2+1,high,search);
		}
		else
		{
			return ternarysearch(arr,mid1+1,mid2-1,search);
		}
	}


	return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=n-1;
	int search=10;
	int p;
	p=ternarysearch(arr,low,high,search);
	cout << "Index of " << search
         << " is " << p << endl;
	//return 0;
}