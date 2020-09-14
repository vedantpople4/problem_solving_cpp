#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	string s;
	cin>>s;
	ll sum=0,count=0;
	sum = min(abs(int(s[0]) - int('a')) , 26-abs(int(s[0]) - int('a')));
	for(ll i=0;i<s.length()-1;i++)
	{
		sum += min(abs(int(s[i]) - int(s[i+1])),26-abs(int(s[i]) - int(s[i+1])));
	}
	cout<<sum<<endl;
}
