#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0, j=0;
	string t = "hello";
	for(int i=0;i<s.size();i++)
	if(t[i]==s[j])
	{
		j++;
		count++;
	}
	if(count==5)
	cout<<"YES";
	else cout<<"NO";
	
	return 0;
}

