#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,n) for(long long int i=0;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll l = 0, r = n, i=0, count=0;
    while(r>l){
        s[i] != s[l];
        l++;
        count++;
    }
    cout<<count<<endl;
}
     
     
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    		solve();
    	}
    	runtime;	
}
