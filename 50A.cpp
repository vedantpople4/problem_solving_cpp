#include<iostream>  
#include<string.h>
#include<cstdlib>
using namespace std;  
int main()  
{
	string n,m;
	cin>>n>>m;
	for(int i=0;i<n.size();i++)
	{
		n[i]=tolower(n[i]);
		m[i]=tolower(m[i]);
	}
	if(n == m)
	{
		cout<<"0"<<"\n";
	}
	else{
		for(int i=0;i<n.size();i++)
		{
			if(n<m)
			{
			cout<<"-1"<<"\n";
			break;
			}
			else 
			cout<<"1"<<"\n";
			break;
		}
	}
return 0;
}

