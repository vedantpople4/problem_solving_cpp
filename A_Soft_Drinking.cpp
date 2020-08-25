#include<bits/stdc++.h>
using namespace std;

//#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll drink = k*l/n*l;
    ll limes = c*d/n;
    ll salt = p/(p*n);
    cout<<min({drink,limes,salt})<<endl;
    return 0; 


}