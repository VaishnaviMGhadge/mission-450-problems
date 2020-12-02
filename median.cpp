#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int a[]={56 ,67 ,30, 79,61};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" "<<"\n";

	}
	cout<<"median is:"<<a[n/2]<<endl;
	return 0;

}