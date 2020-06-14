#include<iostream>  
#include<string.h>
#include<cstdlib>
using namespace std;  
int main()  
{
	string n;
	cin>>n;
	int count;
	for(int i=0;i<n.size();i++)
	{
		if(n[i]==n[i+1])
		count++;
	}
		if(count==7)
		cout<<"YES";
		else if(count!=7)
		cout<<"NO";
		return 0;
}

