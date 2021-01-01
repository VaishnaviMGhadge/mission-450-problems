#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
void missing(vector<int> v)
{
	
	int i,j,missing;
	for ( i = 0; i<v.size()-1; i++)
	{
		if(v[i+1]-v[i]==2)
		{
			(v[i+1]+v[i])/2;
			missing=i;
			v.insert(v.begin()+missing+1,v[missing]+1);
		}
	}
	
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}


void repeating(vector<int> v)
{
	int count=1;
	std::vector<int> c;
	for (int i = 0; i <v.size()-1; ++i)
	{
		if(v[i]==v[i+1])
		{
			count=count+1;
			c.push_back(count);
			count=1;
		}
		else
		{
			count=1;
			c.push_back(count);
		}
	}
	cout<<"repeated elements are:"<<"\n";
	for (int i = 0; i < c.size(); i++)
	{
		if(c[i]==2)
		{
			
			cout<<"  "<<v[i];
		}
	}
}

int main()
{
	std::vector<int> v={1,1,2,4,5,6,8,9,11,11};
	missing(v);
	repeating(v);
	return 0;
}