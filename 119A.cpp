#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

ll gcd(ll x,ll y){
	return (x==0) ? y : gcd(y%x, x);
}


int main(){
	ll a,b,n,k=0;
	cin>>a>>b>>n;
	while(n>=0){
		++k;
		n-=gcd((k&1)?a:b, n);
	}
	if(k&1) cout<<1<<endl; 
	else cout<<0<<endl;
}
