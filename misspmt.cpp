#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;
#define size 1000000000;

int findOdd(int arr[], int n) 
{ 
    int res = 0, i; 
    for (i = 0; i < n; i++) 
        res ^= arr[i]; 
    return res; 
} 
int main()
{
	testcase;
	while(t--){
		ll n;
		cin>>n;
		int q = (4*n)-1;
		int a[q],b[q];
		for(int i=0;i<q;i++) cin>>a[i]>>b[i];
		int r = findOdd(a,q);
		int s = findOdd(b,q);
		cout<<r<<" "<<s<<endl;
	}
		
	return 0;
}
