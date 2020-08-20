#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<k+((k-1)/(n-1))<<endl;
	}
	
}
