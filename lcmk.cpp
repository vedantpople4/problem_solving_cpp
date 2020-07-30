#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
 
ll findlcm(ll arr[], ll n) 
{  
    ll ans = arr[0];  
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

int main() 
{ 
    testcase;
	while(t--){
		ll n,m,k;
		cin>>n>>m>>k;
		ll a[n],b[n];
		for(ll i=0;i<n;i++){
		cin>>a[i];
		b[i] = pow(a[i],k);}
		cout<<findlcm(b,n)%m<<endl;
			
	} 
	return 0;
} 
