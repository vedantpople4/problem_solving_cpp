#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,d,ans=0;
        cin>>n>>d;
        bool ok;
        ll a[n];
        vector <ll> v(n);
        for(ll& x:v) cin>>x;
        sort(v.begin(),v.end());
        
    cout<<(v.back()<=d || v[0]+v[1]<=d ? "YES": "NO")<<endl;
    

    }


    return 0;
}