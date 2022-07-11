#include<bits/stdc++.h>
#define ll long long
using namespace std;
int fact(int a){
	if(a==1 || a==0) return 1;
	else return a*fact(a-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
