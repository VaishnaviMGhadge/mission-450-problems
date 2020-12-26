#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void buildHeap(int arr[],int n)
{
	int startindex=(n/2)-1;
	for(int i=startindex;i>=0;i--)
	{
		heapify(arr,n,i);
	}
}
void printheap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "; 
	}
}


void sortheap(int arr[],int n)
{
	for (int i = n; i >=0; i--)
	{
		swap(arr[i],arr[0io]);
		heapify(arr,i-1,0);
	}

}

void sorted(int arr[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={ 15,20,7,9,30 };
	int n=sizeof(arr)/sizeof(arr[0]);
	buildHeap(arr,n);
	printheap(arr,n);
	sortheap(arr,n);
	sorted(arr,n);
	return 0;
}