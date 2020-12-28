#include <iostream>
#include <stdio.h>
using namespace std;

int squaring(int limit)
{
	int low=1;
	int high=limit;
	int mid;
	int ans;
	if (limit == 0 || limit == 1)  
       return limit; 
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid*mid==limit)
		{
			//cout<<mid;
			return mid;

		}
		else if(mid*mid<limit)
		{
			low=mid+1;
			ans=mid;
		}
		else
		{
			high=mid-1;
		}
		
	}
	return ans;
}

int main()
{
	int limit=9;
	cout<<squaring(limit);
	return 0;
}