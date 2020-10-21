#include<iostream>
using namespace std;

int main()
{
	int a,b,n=0;
	cin>>a>>b;
	do
	{
		a = 3*a;
		b = 2*b;
		n++;
	}
	while(a<=b);
	cout<<n;
	return 0;
}
