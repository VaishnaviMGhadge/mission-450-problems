#include <iostream>
#include <cstring>
# include <bits/stdc++.h> 
#include <stdio.h>
#include<vector>
using namespace std;

int main()
{
	string a="ABCD";
	string b="ACBD";
	string temp;
	bool f=true;
	std::vector<string> v;
	temp=a+a;
	cout<<temp;
	for (int i = 0; i < temp.size()-1; i++)
	{
		if(b==temp.substr(i,b.size()))
		{
			v.push_back(temp[i]);
			f=true;
			break;
		}
		else
		{
			f=false;
		}
	}
	if(f==true)
		cout<<" b string is rotation of a ";
	else
		cout<<"b string is not rotation of a";
	
return 0;
}