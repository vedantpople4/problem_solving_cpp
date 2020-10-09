#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main(){
	ll a,b;
	cin>>a>>b;
	ll d = max(a,b);
	const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << probability[d] << endl;
    return 0;
}
