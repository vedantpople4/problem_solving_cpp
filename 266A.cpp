#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	
	int count = 0, a[26]={0}; 
	string s;
	cin>>s;
	for(int j=0;j<s.size();j++)
	{
	if(a[s[j]-'a']==0)
	{
		count++;
		a[s[j]-'a'] = 1;
	}	
	}
	if(count%2 == 0)
	cout<<"IGNORE HIM";
	else
	cout<<"CHAT WITH HER";
	return 0;
}
