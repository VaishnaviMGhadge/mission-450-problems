#include <iostream>
using namespace std;

int main()
{
	int a[10]={2,5,8,10,12,17,23,36,39};
	int x=2;
	int n=sizeof(a)/sizeof(a[0]);
	int low=0;
	int high=n-1;
	int mid;
	bool flag=true;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (a[mid]==x)
		{
			cout<<a [mid];
			flag=true;

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
	if(flag==true)
		cout<<"element is found at"<<mid+1<<endl;
	if(flag==false)
		cout<<"element not found";


	return 0;
}