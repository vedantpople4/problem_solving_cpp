#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> v;
        for(ll i=0;i<v.size();i++) cin>>v[i];
        ll c1=0, c2=0;
        for(ll i=0;i<v.size()-1;i++){
            if(v[i]==v[v.size()+1])c2++;
            else c1++;
        }
        cout<<min(c1,c2)<<endl;

    }
    return 0;

}