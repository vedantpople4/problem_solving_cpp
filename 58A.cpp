#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
	int a=0, b=0;
	for(int i=0;i<s.length();i++)
	{
		if(islower(s[i]))
		a++;
		else
		b++;
	}
	if(a>=b)
	{
		for(int i=0;i<s.length();i++)
		{
			char t = tolower(s[i]);
			cout<<t;
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			char t = toupper(s[i]);
			cout<<t;
		}
	}
	return 0;
}
