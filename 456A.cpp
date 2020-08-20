#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	ll n;
	cin>>n;
	pair < ll, ll> a[n];
	for(ll i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	for( ll i=0;i<n-1;i++){
		if(a[i].first<a[i+1].first && a[i].second>a[i+1].second) cout<<"Happy Alex"<<endl;
		else cout<<"Poor Alex"<<endl;
	}

}
