#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	ll n,k,sum=0,count=0;
	cin>>n>>k;
	ll a[n];
	ll ans = k-1;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<k;i++) sum+=a[k];
	count = sum;
	for(ll i=k;i<n;i++) {
	count = count + a[i] - a[i-k];
	if(count<sum){
		count = sum;
		ans = i;
	}
	}
	cout<<ans-k+2<<endl;
	return 0;
}
