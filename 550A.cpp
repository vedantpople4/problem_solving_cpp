#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll n,x;
		cin>>n>>x;
		if(n<=2) cout<<1<<endl;
		else cout<<((n-3)/x)+2<<endl;
	}
	return 0;
}
