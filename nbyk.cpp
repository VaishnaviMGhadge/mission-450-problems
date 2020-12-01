#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> v;
	int a[]={3,1,2,2,1,2,3,3};
	int k=4,i;
	int count[k+1]={0};
	int n=sizeof(a)/sizeof(a[0]);
	int z=n/k;
	for( i=0;i<k+1;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for (int i = 0; i < k+1; i++)
	{
		cout<<count[i]<<"  ";
		if(count[i]>z)
		{
			v.push_back(i);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		
		cout<<endl;
		cout<<v[i];
	}


	return 0;
}