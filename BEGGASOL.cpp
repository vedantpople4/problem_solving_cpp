#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> f(n);
        for (ll i=0;i<n;i++) cin>>f[i];
        
        ll ans = 0;
        ll curr = 0;
        ll i = 0;
        while(true){
            curr += f[i];
            f[i] = 0;
            if (curr>=1){
                ans++;
                curr--;
                i++;
                if(i>=n) i-=n;
                
            }
                else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
        
        
        
	return 0;
}
