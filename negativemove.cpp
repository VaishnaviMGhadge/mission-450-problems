#include <iostream>
using namespace std;
int a[10]={-12,2,-3,4,-1},i,j=0;

void part()
{
	
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			if(i!=j)
			{
				swap(a[i],a[j]);
			}
			j++;
		}
	}
}
void show()
{
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	part();
	show();
	return 0;
}