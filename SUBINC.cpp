#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define FOR(i,n) for(int i=0 ; i<n ;i++)
#define FORE(i,a,b) for(int i=a ; i<b ;i++)
#define ii pair<int,int>
#define iii pair<int,ii>
#define iiii pair<iii,int>
#define pll pair<ll,ll>
#define plll pair<ll,pll>
#define vv vector
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
void solve(){
	ll n;
	cin>>n;
	ll current, prev, sub, count = 0;
	FOR(i,n){
		cin>>current;
		if(i==0 || current<prev) sub = 1;
		else sub++;
		count+=sub;
		prev = current;
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

