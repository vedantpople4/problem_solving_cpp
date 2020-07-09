#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	ll m,l,r,c=0;
	ll a[1000005];
	string s;
	cin>>s>>m;
	for(ll i=1;i<s.size();i++){
		if(s[i]==s[i-1])
		c++;
		a[i]=c;
	} 
	while(m--){
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
	return 0;
}
