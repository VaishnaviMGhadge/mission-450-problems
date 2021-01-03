#include <stdio.h>
#include <iostream>
using namespace std;

void thief(int arr[],int n)
{
	int inc=arr[0];
	int exc=0;
	int exc_new;
	int i;
	for(i=1;i<n;i++)
	{
			if(inc>exc)
			{
				exc_new=inc;
			}
			else
			{
				exc_new=exc;
			}
		inc=exc+arr[i];
		exc=exc_new;
	}
	if(inc>exc)
	{
		cout<<inc;
	}
	else
	{
		exc;
	}

}

int main()
{
	int arr[]={5,5,10,100,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	thief(arr,n);
	return 0;
}