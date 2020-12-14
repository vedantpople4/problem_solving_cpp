#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,h,n) for(long long int i=h;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;

     
   
     
int main()
{
    	fastio
    	ll d1,v1,d2,v2,p,ans=0,day=0;
    	cin>>d1>>v1>>d2>>v2>>p;
    	while(ans<p){
    		day++;
    		if(day == d1){
    			ans+=v1;
    			d1++;
			}
			if(day == d2){
				ans+=v2;
				d2++;
			}
		}
    	cout<<day<<andl;
    	
    	runtime;
    	
    	
    	
}
