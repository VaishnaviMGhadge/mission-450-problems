#include <iostream>
#include <stdio.h>
using namespace std;
void showarray(int arr[],int n)
{
	cout<<" ";
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

void permutrations(int arr[],int n,int cid)
{
	if(cid==n-1)
	{
		showarray(arr,n);
		return;
	}
	for (int i = cid; i <n; i++)
	{
		swap(arr[i],arr[cid]);
		permutrations(arr,n,cid+1);
		swap(arr[i],arr[cid]);
	}

}


int main()
{
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	//for (int i = 0; i < n; ++i)
	//{
		permutrations(arr,n,0);
	//}
	//showarray(arr,n);
	return 0;
	
}