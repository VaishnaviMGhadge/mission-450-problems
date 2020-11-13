//BETTER COMPLEXITY 0n
#include <iostream>
using namespace std;
int main()
{
	int a[10]={12,34,56,7,8};
	int max,min,i;
	max=a[0];
	min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
}
