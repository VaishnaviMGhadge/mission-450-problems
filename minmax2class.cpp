//CLASS IMPLEMENTATION OF KTH MIN ELEMENT
#include <iostream>
#include <stdio.h>
using namespace std;
class minmax2class
{
private:
	int a[100],n;
public:
	minmax2class(int n11 ,int a11[])
	{
		n=n11;
		//k=k11;
		for(int i=0;i<n11;i++)
		{
			a[i]=a11[i];
		}
		
	}
	void logic()
	{	
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=n-1;i++)
			{
				if(a[j]>a[j+1])
				{
					int temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;

				}
			}
		}
	}

	void show(int k11)
	{
		int k;
		k=k11;
		cout<<a[k];
		
	}
	
};
int main()
{ 
	int n1,a1[100],k1;
	cout<<"enter array size";
	cin>>n1;
	cout<<"enter aaray elements";
	for(int i=0;i<n1;i++)
	{
		cin>>a1[i];
	}
	cout<<"enter kth element to be found";
	cin>>k1;
	minmax2class c1(n1,a1);
	c1.logic();
	c1.show(k1);

	return 0;
}