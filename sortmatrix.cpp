#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a[][3]={{5,6,8},{9,4,1},{3,2,10}};
	int rows=sizeof(a)/sizeof(a[0]);
	int cols=sizeof(a[0])/sizeof(int);
	for (int i = 0; i < (rows*cols); i++)
	{
		for (int j = 0; j <(rows*cols)-1 ; j++)
		{
			if(a[j/cols][j%cols] >a[(j+1)/cols][(j+1)%cols])
			{
				swap(a[j/cols][j%cols],a[(j+1)/cols][(j+1)%cols]);
			}
		}
	}
	for (int i = 0; i < rows;i++)
	{
		for (int j = 0; j <cols ; j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	int low=0;
	int high=(rows*cols)-1;
	int mid=(low+high)/2;
	//cout<<a[]<<"  ";
	cout<<" Mid is:"<<a[low][mid];
	return 0;
}