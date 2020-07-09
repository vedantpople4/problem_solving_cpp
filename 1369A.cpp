#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll n;
		cin>>n;
		if(n%4==0 && n>3) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
