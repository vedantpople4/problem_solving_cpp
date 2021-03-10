#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a , b;
		cin>>a>>b;
		int c = a/b;
		int d = c+1;
		int e = a%b;
		if(e==0)
		cout<<e<<endl;
		else
		{
		int f = d*b;
		int g = f-a;
		cout<<g<<endl;
		}
	}
	return 0;
}
