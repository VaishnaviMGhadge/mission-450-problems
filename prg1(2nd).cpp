//REVERSE AN ARRAY
#include <stdio.h>
#include <iostream>
using namespace std;

void reverse(int[],int);
int main()
{
	int a[100],n;
	cout<<"enter array size";
	cin>>n;
	cout<<"enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse(a,n);
	return 0;
}

void reverse(int j[],int n)
{
	int start=0;
	int end=(n-1);
	int temp;
	for( int i=0;i<(n-1);i++)
	{
		temp=j[start];
		j[start]=j[end];
		j[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<j[i];
	}
}