#include <iostream>
using namespace std;
int main()
{
	int search=40;
	bool flag=true;
	int a[][4]={{1,3,5,7},{10,11,16,20},{23,30,34,40}};
	int i,j;
	for ( i = 0; i <3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			if(a[i][j]==search)
			{
				cout<<a[i][j]<<" ";
				flag=true;
				break;
			}
			else
			flag=false;
		}
		if(flag==true)
			break;
	}
	if(flag==true)
		cout<<"element is found at :"<<i<<":"<<j;
	else
	{
		cout<<"not found";
	}
	return 0;
}