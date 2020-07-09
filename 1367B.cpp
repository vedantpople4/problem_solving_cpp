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
		ll a=0,b=0;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			if(x%2!=i%2){
				if (i%2==0) a++;
				else b++;
			}
		}
		if(a!=b) cout<<-1<<endl;
		else cout<<a<<endl;
	} 
	return 0;
}
