//FIND MINIMUM AND MAXIMUM ELEMENT IN AN ARRAY 0n2
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[10]={45,100,34,234,90};
	int i,j,temp;
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
	//for(i=0;i<5;i++)
	cout<<a[0]<<endl;
	cout<<a[4]<<endl;
	//return 0;
}