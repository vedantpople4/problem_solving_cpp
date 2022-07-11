#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll l;
	cin>>l;
	ll n;
	cin>>n;
	while(n--){
		ll w,h;
		cin>>w>>h;
		if(w<l || h<l) cout<<"UPLOAD ANOTHER"<<endl;
		else if((w>=l && h>=l) && (w==h)) cout<<"ACCEPTED"<<endl;
		else cout<<"CROP IT"<<endl;
	}

}