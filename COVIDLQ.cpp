#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define testcase long long t; cin>>t;
int main()
{
	testcase;
	while(t--)
	{
		ll n=0;
		cin>>n;
		ll last = 6;
		ll temp;
		ll bound = 0;
		for(ll i=0;i<n;i++)
		{
		cin>>temp;
		if(temp)
		{
			if(i-last<6)
			{
				bound = 1;
			}
			last = i;
		}
		}
		if(bound) cout<<"NO";
		else cout<<"YES";
	}
	return 0;
}
