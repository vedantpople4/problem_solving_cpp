#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    bool ok =0;
    ll a,b;
    for(ll i=0;i<t;i++){
        cin>>a>>b;
        if(a!=b){   
        ok = 1;
        break;
        }
    }
        if(ok) cout<<"Happy Alex"<<endl;
        else cout<<"Poor Alex"<<endl;
        
    
    return 0;

}