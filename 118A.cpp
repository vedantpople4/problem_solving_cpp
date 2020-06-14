#include<iostream>  
#include<string>
using namespace std;  
int main()  
{
	int n,tmp;
	cin>>n;
	int a[n],x,y,z;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		if((x==1 && y==1 && z== 1) || (x==1 && y==1 && z==0 ) || (x==1 && y==0 && z== 1) || (x==0 && y==1 && z== 1) || (x==1 && y==1 && z== 1))
		tmp++;
		else
		continue;
	}
	cout<<tmp;
	
return 0;
}

