#include<iostream>
#include<cstdio>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll w,h,n;
        cin>>w>>h>>n;
        ll ans = 1;
        while(w%2==0){
            w/=2;
            ans*=2;
        }
        while(h%2==0){
            h/=2;
            ans*=2;
        }
        cout<<(ans>=n  ? "YES" : "NO")<<endl;

    }
    return 0;
}