#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main() 
{
   ll n,flag = 0;
   for(ll i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<"yes"<<endl;
   else
   cout<<"no"<<endl;
   return 0;
}
