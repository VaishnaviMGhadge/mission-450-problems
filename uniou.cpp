#include <iostream>
using namespace std;
#include <algorithm>  
#include <vector>
std::vector<int> v={2,3,4,5,1};  
int main()
{
	
	int b[10]={6,5,4,10},j;
	int i=0;
	for(j=0;j<=3;j++)
	{
		if(v[i]!=b[j])
		{
			v.push_back(b[j]);

		}
	}
	
	for(i=0;i<v.size();i++)
	{
		sort(v.begin(),v.end());
		auto  last=unique(v.begin(),v.end());
		v.erase(last, v.end());   
		cout<<v[i]<<endl;
	}

	 
	 return 0;
	}

