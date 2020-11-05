#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	int a[t];
	int y[5] = {2019,2017,2016,2015,2010};
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
		for(int j=0;j<t;j++)
		{
			if(a[i]==y[j])
			cout<<"HOSTED"<<"\n";
			break;			
		}
		
	}
	cout<<"NOT HOSTED";
	return 0;
}
