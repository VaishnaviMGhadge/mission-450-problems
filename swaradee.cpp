#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int amt;
	double balance;
	cin>>amt>>balance;
	if(amt+0.5<=balance && amt%5==0)
		balance=(balance-amt)-0.5;
	cout<<fixed<<setprecision(2)<<balance;
	return 0;
}