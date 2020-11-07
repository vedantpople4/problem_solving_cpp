#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int c = a/10;
		int e = b/10;
		int d = a%10;
		int f = b%10;
		int x = (f*10+d)+(e*10+c);
		int y = (c*10+e)+(d*10+f);
		int z = (c*10+f)+(e*10+d);
		int w = (e*10+d)+(c*10+f);
		int p[4] = {x,y,z,w};
		cout<< *max_element(p,p+4);
	}
	return 0;
	
}
