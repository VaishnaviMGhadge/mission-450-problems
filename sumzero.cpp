#include <iostream>
using namespace std;
int main()
{
	int a[10]={4,2,-3,1,6},i,j,sum=0;

	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			sum=sum+a[j];
			if(sum==0)
			{
				cout<<"yes";
				break;
			}


		}

		sum=0;
		
			
	}
	
			
	/*for (int i = 0; i < 5; i++)

	{
		if(a[i]==0)
		{
			cout<<"yes";
		}
	}*/
	return 0;
}