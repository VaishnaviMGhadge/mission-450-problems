#include <iostream>

using namespace std;
int main()
{
	int a[100]={1,2,0,0,0,1,2,0,0,1,2,0},i,temp,mid,low,high;
	low=0;
	mid=0;
	high=11;
	for(i=0;i<12;i++)
	{
		if(a[mid]==0)
		{
			
			temp=a[mid];
			a[mid]=a[low];
			a[low]=temp;
			mid++;
			low++;
		}
		else if(a[mid]==1)
		{
			mid++;
		}
		else if(a[mid]==2)
		{
			
			temp=a[mid];
			a[mid]=a[high];
			a[high]=temp;
			high--; 

		}
	}
	for(i=0;i<12;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

