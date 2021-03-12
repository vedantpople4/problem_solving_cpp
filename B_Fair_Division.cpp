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
        ll c1=0, c2=0;
        ll count = n;
        while(n--){
            ll a;
            cin>>a;
            if(a==1) c1+=1;
            else c2+=2;
        }
        if((c1+c2)%2==1) cout<<"NO"<<endl;
        else{
            ll sum = (c1+c2)/2;
            if(sum%2==0 ||(sum%2==1 && c1!=0))
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}