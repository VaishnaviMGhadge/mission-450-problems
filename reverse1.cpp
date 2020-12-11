#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	string a[]={"h","e","l","l","o"};
	int start=0;
	int n=sizeof(a)/sizeof(a[0]);
	int end=n-1;
	while(start<end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i];
	}
	return 0;
}