#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll n,sum=0;
		cin>>n;
		for( ll i=1;i<=n/2;++i) sum+= i*i*8;
		cout<<sum<<endl; 
	}
	return 0;
}

