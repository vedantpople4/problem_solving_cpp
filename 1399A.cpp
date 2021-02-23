#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	bool ans = true;
	for(int i=1;i<n;++i){
		ans &= (a[i]-a[i-1]<=1);
	}
	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}

return 0;	
	
}
