#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans = 0;
	    for(int i=0;i<n-1;i++)
	        {
	            if(s[i]==s[n-1])
	            ans++;
	            
	        }
	       if(ans>0) cout<<"YES"<<endl;
	       else cout<<"NO"<<endl;
	}
	return 0;
}
