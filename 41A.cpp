#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int s,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>s>>t;
		int h = (23-s)*60;
		int m = (60-t);
		a[i] = h+m;
	}
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<"\n";
	}
	
	
return 0;
}
