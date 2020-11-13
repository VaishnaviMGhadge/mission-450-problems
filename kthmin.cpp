#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[20]={12,34,56,7,8};
	int i,j,k,temp;
	cout<<"enter the value of k";
	cin>>k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<a[k];
	return 0;

}