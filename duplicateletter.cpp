#include <iostream>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	string s="geeksgeeks";
	int n=s.size();
	int count=1;
	
	std::map<char, int> map;
	for (int i = 0; i < n; ++i)
	{
		if(map[s[i]])
		{
			map[s[i]]++;
		}
		else
		{
			map[s[i]]=1;
		}
	}
    for (auto i : map) 
        cout << i.first << "   " << i.second << endl; 




             //sort(s.begin(), s.end()); 
    //unique(s.begin(), s.end()+s.size());
   	//cout<<s;
	//for (int i = 0; i < s.size()-1; i++)
	//{
	 // cout<<s[i]<<" "<<count(s.begin(), s.end(), s[i])<<endl; 
	//}
	return 0;
}