#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
#include<list>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n], b[m];
        set <ll> s;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll j=0;j<m;j++) cin>>b[j];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(a[i]==b[j]) 
                s.insert(b[j]);
            }
        }
        cout<<s.size();
        for(ll i=0;i<s.size();i++) cout<<s[i];
        cout<<endl;
    }

    return 0;
}