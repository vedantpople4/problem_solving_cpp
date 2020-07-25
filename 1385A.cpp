#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main(){
	testcase;
	while(t--){
		ll a[3];
		for(ll i=0;i<3;i++) cin>>a[i];
		sort(a,a+3);
		if(a[1]!=a[2]) cout<<"NO"<<endl;
		else cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
		
	}
	return 0;
}
