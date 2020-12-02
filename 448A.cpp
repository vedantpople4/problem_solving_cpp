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
     

     
     
int main()
{
    	fastio
    	ll a1,a2,a3,b1,b2,b3;
    	cin>>a1>>a2>>a3>>b1>>b2>>b3;
    	ll n;
    	cin>>n;
    	ll cups = a1+a2+a3;
    	ll medals = b1+b2+b3;
    	ll cs = cups/5;
		if(cups%5!=0) cs++;
		ll ms = medals/10;
		if(medals%10!=0) ms++;
		if(cs+ms<=n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    	
    	runtime;
    	
    	
    	
}
