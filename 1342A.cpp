#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll x,y,b,ans=0,sum=0,a;
		cin>>x>>y>>a>>b;
		if(x>y)swap(x,y);
		ll dif = y-x, rem=0;
		rem = y-x;
		ans = min(a*x+a*y, a*rem+b*x);
		cout<<ans<<endl;	
	}
	return 0;
}
