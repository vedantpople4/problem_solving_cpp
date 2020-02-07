#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	int a[p],b[p];
	for(int i=0;i<p;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<p;i++)
	{
		cin>>b[i];
	}
	if(binary_search(a,a+p,n) || binary_search(b,b+p,n))
	cout<<"I become the guy.";
	else
	cout<<"Oh, my keyboard!";
}

	
