#include <iostream>
#include <stdio.h>
using namespace std;

void hipify(int arr[],int n,int index)
{
	int largest=index;
	int left=2*index+1;;
	int right=2*index+2;;
	if(left<n && arr[left]>arr[largest])
	{
		largest=left;
	}
	if(right<n && arr[right]>arr[largest])
	{
		largest=right;
	}
	if(largest!=index)
	{
		swap(arr[largest],arr[index]);
		hipify(arr,n,largest);
	}
}


void buildheap(int arr[],int n)
{
	int start=(n/2)-1;
	for (int i = start; i >=0 ; i--)
	{
		hipify(arr,n-1,0);
	}
}
void sortheap(int arr[],int n)
{
	 
    for (int i = n - 1; i > 0; i--) 
    {
    	swap(arr[0], arr[i]);
 		hipify(arr, i, 0);
    }
}



void showheap(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void showsortedheap(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int arr[]={30,7,20,1,5,10,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(arr,n);
	cout<<"Before Sorting  ";
	showheap(arr,n);
	cout<<"\n";
	sortheap(arr,n);
	cout<<"After Sorting   ";
	showsortedheap(arr,n);
	return 0;
}

