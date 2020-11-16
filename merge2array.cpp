#include <iostream>
#include <vector>

using namespace std;
std::vector<int> v3;

void merge(vector<int >v1,vector<int >v2)
{
	int i=0;
	int j=0;;
	//int k=ub;
	while( i<v1.size() && j<v2.size())
	{
		if(v1[i]<v2[j])
		{
			v3.push_back(v1[i]);
			i++;
			
		}
		else
		{
			v3.push_back(v2[j]);
			j++;
			
		}
	}

	/*while(i<v1.size())
	{
		v3.push_back(v1[i]);
		i++;
	}
	while(j<v2.size())
	{
		v3.push_back(v2[j]);
		j++;
	}*/
	if(i>v1.size())
	{
		while(j<v2.size())
		{
			v3.push_back(v2[j]);
			j++;
		}
	}
	else
	{
		while(i<v1.size())
		{
			v3.push_back(v1[i]);
			i++;
		}
	}
}

int main()
{

	std::vector<int > v1={11,31,51,71};
	std::vector<int > v2={0,2,6,8,9};
	//int lb=0;
	//int mid=(0+v2.size())/2;
	//int ub=v2.size();
	merge(v1,v2);
	for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i]<<endl;
	}
	return 0;

	
}