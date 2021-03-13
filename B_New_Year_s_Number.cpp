#include<iostream>
#include<cstdio>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll c1 = n%2020;
        ll c2 = (n - c1)/2020 - c1;
        if(c2>=0 && 2020*c2+2021*c1==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}