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
    cin >> n;
    ll a[n];
    fr(i,n)
    cin >> a[i];
    sort(a,a+n);
    if(n==1)
        cout << a[0] << andl;
    else
    {
        ll x=a[n-1],y=a[n-2];
        for(ll i=n-3;i>=0;i--)
        {
            if(x<=y)
                x+=a[i];
            else
                y+=a[i];
        }
        cout << max(x,y) << andl;
    }
}
 
int main()
{
  fastio
  
  ll t;
  cin >> t;
 
  while(t--)
    solve();
 
  runtime
}
