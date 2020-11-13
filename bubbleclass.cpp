//BUBBLE SORT USING CLASS AND OBJECTS

#include <iostream>
#include <stdio.h>
using namespace std;
class bubbleclass

{
private:
	int a[100];
	int i,j,n;

public:
	
	bubbleclass()
	{

		cout<<"enter aarray size";
		cin>>n;
		cout<<"enter array elements";
		for (int i = 0; i <n; i++)
		{
			cin>>a[i];
		}				
	}

	void logic()

	{
	int temp,k;
		for(i=0;i<=n-1;i++)
		{
			for(k=0;k<=n-1;k++)
			{
				if(a[k]>a[k+1])
				{
					temp=a[k];
					a[k]=a[k+1];
					a[k+1]=temp;
				}
			}
		}
	}
	void display()
	{
		
		for(i=0;i<=n-1;i++)    
		{
			cout<<a[i]<<endl;
		}
	}
	
};
int main()
{
	
	bubbleclass b1;
	 b1.logic();
	b1.display();
	return 0;
}