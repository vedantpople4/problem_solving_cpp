#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;
int findCounts(int *arr, int n) 
{  
    int hash[n]={0}; 
    ll r = 0;
    int i = 0; 
    while (i<n) {   
	    hash[arr[i]-1]++; 
		i++; 
    } 
    for(int i=0; i<n; i++){
        //cout<<i+1<<" "<<hash[i]<<endl; 
        if(hash[i]%2==1) return i+1;
	}
} 
int main()
{
	testcase;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> v1;
		vector <ll> v2;
		int q = (4*n)-1;
		int a[q],b[q];
		for(int i=0;i<q;i++) cin>>a[i]>>b[i];
		ll c = findCounts(a,q);
		ll d = findCounts(b,q);
		cout<<c<<" "<<d<<endl;
	}
		
	return 0;
}
