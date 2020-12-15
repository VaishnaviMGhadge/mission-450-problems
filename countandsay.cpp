#include <iostream>
#include <typeinfo>
#include <cstring>
#include <map>
#include <stdio.h>
using namespace std;
int main()
{
	string str="3322251";
	std::map<char, int> map;
	for (int i = 0; i < str.size(); i++)
	{
		//map[str[i]]=map[str[i]]-48;
		if(map[str[i]])
		{
			map[str[i]]++;
		}
		else
		{
			 map[str[i]]=1;
		}
	}
	 for (auto i : map) 
        cout <<  i.first << "   " << i.second << endl; 

    return 0;
}