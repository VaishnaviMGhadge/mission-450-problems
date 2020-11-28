#include <iostream>
using namespace std;

int main()
{
	int a1[10]={1,5,5,10,20,30};
	int a2[10]={5,5,13,15,20};
	int a3[10]={5,5,20,};
	int n1=sizeof(a1)/sizeof(a1[0]);
	int n2=sizeof(a2)/sizeof(a2[0]);
	int n3=sizeof(a3)/sizeof(a3[0]);
	int i=0;
	int j=0;
	int k=0;
	while( i<n1 && j<n2 && k<n3)
	{
		if(a1[i]==a2[j] && a2[j]==a3[k])
		{
			cout<<a1[i]<<"  ";
			i++;j++;k++;
		}
		else if(a1[i]<a2[j])
		{
			i++;
			
		}
		else if(a2[j]<a3[k])
		{
			j++;
		}
		else
		{
			k++;
		}
	}
	return 0;
}