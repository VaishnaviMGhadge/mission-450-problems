#include <iostream>
#include <stdio.h>
using namespace std;
void arrayindex(int arr[],int low,int high)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==mid)
		{
			cout<<arr[mid];
			break;
		}
		else if(arr[mid]<mid)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}

	}

}
int main()
{
	int arr[]={0,2,5,8,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=n-1;
	arrayindex(arr,low,high);
}