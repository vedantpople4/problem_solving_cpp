#include <bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mpr make_pair
#define andl "\n"
#define f first
#define s second
#define mset(x,y) memset(x,y,sizeof(x))
#define fr(i,h,n) for(long long int i=h;i<n;i++)
#define trace(it,x) for(auto it = (x).begin(); it != (x).end(); it++)
#define mod 1000000007
#define fastio ios::sync_with_stdio (false); cin.tie (0); cout.tie (0);
#define runtime cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
using namespace std;
     
       
int main()
{
    	fastio
    	ll t;
    	cin>>t;
    	while(t--){
    		string s, p;
    		cin>>s;
    		stack<char> st;
    		for(int i=0;i<s.length();i++){
    			if(s[i]=='(') continue;
				else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^')
				st.push(s[i]);
				else if (s[i]==')'){
					p+=st.top();
					st.pop();
				}
				else p+=s[i];
			}
			cout<<p<<endl;
				
    	}
    	runtime;
    	
    	
    	
}

