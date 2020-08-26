#include<bits/stdc++.h>
using namespace std;

//#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	ll n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	ll drink = (k*l)/nl;
	ll lime = (c*d);
	ll salt = p/np;
	cout<<min(min(salt,lime), drink)/n<<endl;
	return 0;
}
