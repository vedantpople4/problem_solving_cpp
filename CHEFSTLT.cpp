#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int p=0;
		for(int i=1;i<a+1;i++)
		{
			if(a%i==0)
			p++;
		}
		if(p==3)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}

