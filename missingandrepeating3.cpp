#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
 
 void repeated(int arr[],int n)
 {
 	std::map<int, int> map;
 	for (int i = 0; i < n;i ++)
 	{
 		if(map[arr[i]])
 		{
 			map[arr[i]]++;
 		}
 		else
 		{
 			map[arr[i]]=1;
 		}
 	}
 	for(auto i:map)
 	{
 		if(i.second==2)
 		{
 			cout<<"repeated =" <<i.first;
 			//break;
 		}

 		
 	}
 	cout<<"\n";

 	for(int i = 1; i <= n; i++)
    {
        if (map.find(i) ==map.end()) 
        {
            cout << "Missing = " << i;
        }
    }


 }
 int main()
 {
 	int arr[]={7,3,4,5,5,6,2};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	repeated(arr,n);

 }