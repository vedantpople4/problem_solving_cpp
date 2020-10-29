#include <stdio.h>
#include <algorithm>
using namespace std;

#define MOD 1000000007
#define nl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define testcase long long t; scanf("%lld", &t)

ll max(ll a, ll b){
	if(a>b)
	return a;
	else
	return b;
}

int main()
{
 	testcase;
	while(t--){
		ll n;
		scanf("%lld",&n);
		ll p = 0;
		ll a[n];
		for(ll i=0;i<n;i++)
		scanf("%lld", &a[i]);
		sort(a,a+n);
		for(ll i=0,j=n-1; i<n;i++,j--){
			p += max(a[i]-j,0);
			p %= MOD;
		}
		printf("%lld\n",p);
	}  
    return 0;
}
