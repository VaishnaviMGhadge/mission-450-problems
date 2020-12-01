#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int a[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9},i,j;
	int n=sizeof(a)/sizeof(a[0]);
	int b[n];
	int k=*max_element(a,a+n);
	int count[k+1]={0};
	//COUNT THE OCCURANCE
	for(i=0;i<k+1;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		++count[a[i]];
	}
	for (int i = 0; i<k+1; i++)
	{
		cout<<count[i]<<"  ";
	}
	cout<<"*****-occurance count\n ";


	//FINDING OUT THE POSITTIONS
	for(i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}

	for (int i = 0; i<k+1; i++)
	{
		cout<<count[i]<<"  ";
		
	}
	cout<<"*****-position count\n";


	//EXPLORING THE ENTIRE ARRAY

	for(i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
	for (int i = 0; i<n; i++)
	{
		cout<<b[i]<<"  ";
	}
	cout<<"******-explore an sorted  array \n";

	return 0;
}