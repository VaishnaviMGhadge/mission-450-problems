#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{

		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<n3<<" ";
		fibonacci(n-1);
	}
}

int main()
{
	int n=10;
	cout<<"0"<<" "<<"1"<<" ";
	fibonacci(n-2);
	return 0;
} 