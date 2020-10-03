#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
ll k;
cin>>k;
vector <ll> v;
for(ll i=0;i<12;i++){
	ll temp;
	cin>>temp;
	v.push_back(temp);
}
ll n = v.size();
sort(v.begin(),v.end());
ll sum=0,count=0;
bool found = false;
if(k==0) cout<<0<<endl;
for (ll i=n-1; i>=0; i--)
{
	sum +=a[i];
	count++;
	if(sum>=k)
	{
		cout<<sum<<endl;
		break;
	}
}
if(!found) cout<<-1<<endl;
return 0;
}


}
