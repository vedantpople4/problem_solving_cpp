#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c=0;
	cin>>n;
	c = n/100;
	int b = n%100;
	int d = c + (b/20);
	int e = b%20;
	int f = d + (e/10);
	int g = e%10;
	int h = f + (g/5);
	int i = g%5;
	int j = h + (i/1);
	cout<<j;
	
}
