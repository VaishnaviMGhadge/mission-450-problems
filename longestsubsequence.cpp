#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={2,6,1,9,4,5,3},i,j,count=1;
	int n = sizeof(a) / sizeof(a[0]);
	sort(a, a + n);
	    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
    {

        cout << a[i] << " "<<endl;
    }
cout<<"**********Longest Subsequence is**************"<<endl;
    
    	for(j=0;j<n;j++)
    	{
    		if(a[j+1]-a[j]==1)
    		{
    			count=count+1;

    		}
    		else
    		{
    			break;
    		}
    		
    	}
    	cout<<count<<endl;
    	
    
    
    return 0;
}