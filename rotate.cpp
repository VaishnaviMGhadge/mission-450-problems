#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a[10]={1,2,3,4,5,6,7},i,j=6;
	for (int i = 0; i <=6; )
	{
		swap(a[i],a[j]);
		cout<<a[i]<<" " ;
		i++;
	}
	


	return 0;
}