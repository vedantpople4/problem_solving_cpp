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
 
//void solve(){}



int main()
{
	fastio
	ll t;
	cin>>t;
	ll n = t%4;
	if(t==0) cout<<1;
	else{
	if(n==1) cout<<8;
	else if(n==2) cout<<4;
	else if(n==3) cout<<2;
	else if(n==0) cout<<6;
	}
	runtime;
	
	
	
}
