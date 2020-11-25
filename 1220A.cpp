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
	ll t, one=0,zero=0;
	cin>>t;
	string a;
	cin>>a;
	fr(i,t){
		if(a[i]=='z') zero++;
		else if(a[i]=='n') one++;
	}
	while(one--) cout<<"1 ";
	while(zero--) cout<<"0 ";
	
	
	
	runtime;
	
	
	
}
