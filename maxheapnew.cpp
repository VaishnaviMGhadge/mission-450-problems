#include <iostream>
#include <stdio.h>
using namespace std;

void maxheap(int arr[],int index)
{
	int currentidx=index;
	int parentindex=(index-1)/2;
	while(arr[parentindex]<arr[currentidx])
	{
		swap(arr[parentindex],arr[currentidx]);
		currentidx=parentindex;
		parentindex=(currentidx-1)/2;
	}

}
void buildheap(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		maxheap(arr,i);
	}

}
void showheap(int arr[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={50,40,42,80,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(arr,n);
	showheap(arr,n);
	return 0;
}