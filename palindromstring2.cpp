#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
 string s="kanak";
 cout<<"original string:"<<s<<"  ";
 string s1;
 int start=0;
 int end=  s.size()-1;
 s1=s;
 while(start<=end)
 {
 	swap(s1[start],s1[end]);
 	start++;
 	end--;
} 
cout<<"\n";
cout<<"new string:"<<s1<<"   ";
if(s==s1)
{
	cout<<"\n";
	cout<<"palindrome"<<endl;

}
else
{
	cout<<"\n";
	cout<<"not palindrome";
}
//cout<<s1;
 return 0;
}