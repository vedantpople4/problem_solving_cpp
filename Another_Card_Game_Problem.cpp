#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
    testcase;
    while(t--){
        ll c,r;
        cin>>c>>r;
        c = floor(c/9);
        r = floor(r/9);
        if(c>=r) cout<<1<<" "<<r<<nl;
        else cout<<0<<" "<<c<<endl;
		}
    
}