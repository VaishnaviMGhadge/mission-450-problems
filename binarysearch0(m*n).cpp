#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[3][4]={{1,3,5,7},{10,11,11,20},{23,30,34,40}};
	int low=0;
	int high=(3*4-1);
	int mid;
	int mid_row,mid_col;
	bool f=true;
	int search=78;
	while(low<=high)
	{
		mid=(low+high)/2;
		mid_row=mid/4;
		mid_col=mid%4;
		if(a[mid_row][mid_col]==search)
		{
			cout<<a[mid_row][mid_col]<<" ";
			f=true;
			break;
		}
		else if(a[mid_row][mid_col]>search)
		{
			high=mid-1;
			f=false;
		}
		else if(a[mid_row][mid_col]<search)
		{
			low=mid+1;
			f=false;
		}
	}
	if(f==true)
	{
		cout<<"element is found at"<<mid_row<<":"<<mid_col ;
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}






















































