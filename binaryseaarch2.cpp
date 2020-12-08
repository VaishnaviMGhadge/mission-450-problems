#include <iostream>
#include <stdio.h>
using namespace std;
int main()

{
	int a[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,40}};
	int i=0,j=3;
	int search=16;
	bool f=true;
	while(i<3 && j<4)
	{
		if(a[i][j]==search)
		{
			cout<<a[i][j]<<" ";
			f=true; 
			break;
		}
		else if(a[i][j]>search)
		{
			j--;
			f=false;


		}
		else if(a[i][j]<search)
		{
			i++;
			f=false;
		}

	}
	if (f==true)
	{
		cout<<"element is found";
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}
