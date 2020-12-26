#include <iostream>
#include <stdio.h>
using namespace std;

void split(string str)
{
	int count1=0;
	int count2=0;
	int finalcont=0;
	for (int i = 0; i <= str.size(); i++)
	{
		if(str[i]=='0')
		{
			count1=count1+1;
		}
		else
		{
			count2=count2+1;
		}

		if(count1==count2)
		{
		finalcont++;
		
		
		}
	}
	cout<<finalcont;


}

int main()
{
	string str="0111110";
	split(str);
	return 0;
}