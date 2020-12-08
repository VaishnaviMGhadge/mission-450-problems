#include <iostream>
using namespace std;

int main()
{
	int a[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,40}};
	int i,j;
	int row=0;
	int mid;
	int low=0;
	int high=3;
	int x=5;
	bool f=true;

	while(row<3)
	{
		
		while(low<=high)
		{
			mid=(low+high)/2;
			if(a[mid]==x)
			{
				cout<<"elemet is found"<<a[mid]<<endl;
				f=true;
				break;
			}
			else if(a[mid]<x)
			{
				low=mid+1;
			}
			else if(a[mid]>x)
			{
				high=mid-1;
			}
		}

		if (f==true)
			break;
		row++;
		
	}
	return 0;

}