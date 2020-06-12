#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
 
 int main()
{
    int n,m;
    cin>>n>>m;
    {
    	int num[100];
    	for(int i=0;i<=n;i++)
    	cin>>num[i];
    	sort(num+1,num+n+1);
    	int ans = num[n];
    	for(int i=0;i<=n-m+1;++i)
    	ans = min(ans,num[i+m-1]-num[i]);
    	cout<<ans;
	}
	return 0;
	
	
}
