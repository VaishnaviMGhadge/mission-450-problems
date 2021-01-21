#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

void mobile(string s,string arr[] )
{
	string op="";
	if(s==" ")
		cout<<0;
	else
	{
		
		for(int i=0;i<s.size();i++)
		{
			int pos;
			pos=s[i]-'A';
			op=op+arr[pos];
		}
	}
	cout<<op;
}

int  main()
{
	string s="VAISHNAVI";
	string arr[]={
					"2","22","222",
					"3","33","333",
					"4","44","444",
					"5","55","555",
					"6","66","666",
					"7","77","777","7777",
					"8","88","888",
					"9","99","999","9999"
				};
	mobile(s,arr);
	return 0;
}