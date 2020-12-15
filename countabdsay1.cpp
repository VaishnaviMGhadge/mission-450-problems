#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;

int main()
{
	string str="33221";
	string t="";
	int count=1;
	for (int i = 1; i <= str.size();i++)
	{
		if(str[i]==str[i-1])
		{
			count=count+1;

		}
		else
		{
			t=t+to_string(count);
			t=t+str[i-1];
			count=count+1;
			count=1;
		}
	}
	str=t;
	cout<<t;

	
	//for (int i = 0; i <= t.size(); ++i)
	//{
		//cout<<t[i];
	//}


	return 0;
}