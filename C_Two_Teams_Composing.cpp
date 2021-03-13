#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> v(n+1);
        for(ll i =0;i<n;++i){
            ll x;
            cin>>x;
            ++v[x];
        }
        ll mx = *max_element(v.begin(),v.end());
        ll diff = n+1-count(v.begin(),v.end(),0);
        cout<<max(min(mx-1,diff),min(mx,diff-1))<<endl;
    

    }
    return 0;
}