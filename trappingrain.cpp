#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main()

{
	std::vector<int> left;
	std::vector<int> right;
	std::vector<int> minvect;
	std::vector<int> v4;
	int a[10]={0,2,1,3,0,1,2,1,2,1};

	int i,j;
	//LEFT
	
	for (int i = 1; i <=10; i++)
	{
		left.push_back(*max_element(a,a+i));
	}

	for (int i = 0; i < left.size(); i++)
	{
		cout<<left[i]<<" ";
		
	}
	cout<<"\n";
	

	//RIGHT
	for(j=9;j>=0;j--)
	{
		right.push_back(*max_element(a+j,a+9));
	}

	reverse(right.begin(), right.end()); 
	for (int i = 0; i <right.size(); i++)
	{
		cout<<right[i]<<" ";

	}
	cout<<"\n";

	//MIN ELEMENT
	int k=0;
	int l=0;
	while(k<left.size() && k<right.size())
	{
		minvect.push_back(min(left[k],right[k]));
		k++;
	}
	for (int i = 0; i < minvect.size(); i++)
	{
		cout<<minvect[i]<<" ";
	}
	cout<<"\n";

	//COUNTING VOLUME
	int g=0;
	int sum=0;
	while(g<minvect.size() && g<=10)
	{
		v4.push_back(minvect[g]-a[g]);
		g++;
	}
	//PRINTING FINAL OP
	for (int i = 0; i < v4.size(); i++)
	{
		
		sum=sum+v4[i];
	}
	cout<<"\n";
	cout<<"FINAL OP IS:"<<sum;
	
	return 0;
}