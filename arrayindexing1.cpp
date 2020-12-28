#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int arr[]={-1,-2,2,0,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==i)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}