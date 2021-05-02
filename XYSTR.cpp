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
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
       
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    		string s;
    		cin>>s;
    		int n = s.size();
    		int dp[n];
    		dp[0] = 0;
    		int ans=0;
    		FOR(i,n){
    			if(i==0)
    			continue;
    			else if(i==1){
    				if(s[i]==s[i-1])
    				dp[1] = 0;
    				else 
    				dp[1] = 1;
				}
				else{
					if(s[i]==s[i-1])
					dp[i] = dp[i-1];
					else
					dp[i] = max(dp[i-1], dp[i-2]+1);
				}
			}
			cout<<dp[n-1]<<endl;
    		
    		
    	}
    	runtime;
    	
    	
    	
}

