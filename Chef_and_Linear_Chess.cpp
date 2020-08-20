#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
    testcase;
    while(t--){
        ll n,k,c=0;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(k == 2*a[i]) 
            cout<<a[i]<<endl;
            c++; }
        if(c==0) cout<<-1<<endl;
        



    }
}