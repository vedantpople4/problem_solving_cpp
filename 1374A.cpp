#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll x,y,n;
		cin>>x>>y>>n;
		ll a = (n-y)/x;
		cout<<a*x+y<<endl;
	}
	return 0;
}
