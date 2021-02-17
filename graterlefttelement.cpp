#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int arr[]={-1,23,32,4};
	std::vector<int> v;
	stack<int>s;
	for(int i=0;i<4;i++)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top()>arr[i])
			v.push_back(s.top());
		else if(s.size()>0 && s.top()<arr[i])
		{
			while(s.size()>0 && s.top()<=arr[i])
				{
					s.pop();
				}
				if(s.size()==0)
					v.push_back(-1);
				else
					v.push_back(s.top());
		}
		s.push(arr[i]);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}