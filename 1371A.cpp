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
		if(n%2==0)
		cout<<n/2<<endl;
		else
		cout<<(n/2)+1<<endl;
	}
	return 0;
}
