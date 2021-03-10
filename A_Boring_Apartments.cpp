#include<iostream>
#include<stdio.h>
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
using namespace std;
 

int main()
{
	fastio
	ll t;
	cin>>t;
	while(t--){
		ll n,i=0;
        cin>>n;
        ll ans = ((n%10)*10)-10;
        while(n!=0){
            n/=10;
            i++;
        }
        if(i==1) ans+=1;
        else if(i==2) ans+=3;
        else if(i==3) ans+=6;
        else if(i==4) ans+=10;
        cout<<ans<<endl;

	}
	
}
