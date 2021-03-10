#include<cstdio>
#include<iostream>
#define ll long long int;
#define fr(i,n) for(i=0;i<n;i++);
#define testcase ll t; cin>>t; while(t--)

int main(){

    long t; 
    cin>>t;
    while(t--){
        long x; 
        cin>>x;
        
        long ans = 10 * ((x % 10) - 1) + (x / 1 > 0) + 2*(x / 10 > 0) + 3*(x / 100 > 0) + 4*(x / 1000 > 0);
        cout<<ans<<endl;
    }

    return 0;
}
