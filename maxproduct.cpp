#include <iostream>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h> 
std::vector<int> v;
using namespace std;
int main()
{
	int a[10]={-1,-3,-10,0,60},i,j,prod=1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j <5 ; j++)
		{
		
			prod=prod*a[j];
			v.push_back(prod);
		}
		prod=1;

	
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<"  ";
		

	}
	int maxi=*max_element(v.begin(), v.end());
	cout<<maxi;
	return 0;
	
}