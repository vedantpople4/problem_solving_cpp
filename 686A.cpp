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
    	ll n,x,ans=0, sum=0;
    	cin>>n>>x;
    	sum = x;
    	ll cur;
    	char type;
    	for(ll i=0;i<n;i++){
    		cin>>type>>cur;
    		if(type=='+') sum+=cur;
    		else if(sum>=cur) sum-=cur;
    		else ++ans;
		}
		cout<<sum<<" "<<ans<<endl;
    	
    
    	
    	runtime;
    	
    	
    	
}
