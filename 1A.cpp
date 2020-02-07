#include<iostream>  
#include<string>
using namespace std;  
int main()  
{
	int n;
	cin >> n;
	string s;
	for(int i=0;i<n;i++)
	{
	cin >> s;
	if(s.length()>10)
	cout<<s.at(0)<<s.size()-2<<s.at(s.size()-1)<<"\n";
	else
	cout<<s<<"\n";
	}
return 0;
}

