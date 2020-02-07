#include<iostream>  
#include<string.h>
#include<cstdlib>
using namespace std;  
int main()
{
int a[100]
{
	for(int i=0;i<100;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<100;i++)
	{
		if(a[i]>a[i+1])
		int temp = a[i+1];
		a[i+1] = a[i];
		a[i] = temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"+";
	}
}
return 0;
}


