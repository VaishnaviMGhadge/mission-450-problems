#include <iostream>
#include <bits/stdc++.h> 
#include <stdio.h>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	string str="aaaabbaa";
	string b;
	string c;
	std::vector<string> v;
	std::map<string,int> map;
	for (int i = 0; i < str.size(); ++i)
	{
		for (int j = i+1; j <str.size() ;j++)
		{
			b=str.substr(i,j);
			c=b;
			reverse(c.begin(), c.end());
			if(b==c)
			{
				v.push_back(b);
			}
		}
	}

for (int i = 0; i < v.size(); ++i)
{
	cout<<v[i]<<"  "<<" "<<"\n";
	cout<<"\n";
	
}
cout<<"\n";

for (int i = 0; i < v.size(); ++i)
{
	if(map[v[i]])
	{
		map[v[i]];
	}
	else
	{
		map[v[i]]=1;
	}
}
for(auto i:map)
	cout<<i.first<<" "<<i.second<<" ";


/*int max=0;
int i;
for ( i = 0; i < v.size(); ++i)
{
	if(v[i].length()>max)
	{
		max=v[i].length();
	}
}
cout<<max;*/


	return 0;
}