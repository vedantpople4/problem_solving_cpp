#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main(){
	ll n,sum=0;
	cin>>n;
	ll b[n];
	b[0] = 0;
	for(ll i=0;i<n;i++){
		ll e;
		cin>>e;
		b[i+1] = b[i]+e;
	}
	
	ll m;
	cin>>m;
	for(ll i=0;i<m;i++)
	{
		ll w;
		cin>>w;
		ll ans = lower_bound(b,b+n,w)-b;
		cout<<ans<<endl;
	}
	return 0;
	
}
