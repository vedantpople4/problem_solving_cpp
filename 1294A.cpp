#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;
int main()
{
	testcase;
	while(t--){
		ll a[3],n;
		cin>>a[0]>>a[1]>>a[2]>>n;
		sort(a,a+3);
		ll d = a[2]-a[0];
		d += a[2]-a[1];
		if(n>=d){
			n-=d;
			if(n%3==0)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
		
	}
	return 0;
}

