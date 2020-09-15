#include<iostream>  
#include<string>
using namespace std;  

bool vowels (char ch){
	if((ch!='A' && ch != 'a')&&(ch!='E' && ch != 'e')&&(ch!='I' && ch != 'i')&&(ch!='O' && ch != 'o')&&(ch!='U' && ch != 'u'))
;} 

int main()  
{
	string s,tmp;
	cin>>s;
	int len = s.size();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			continue;
		}
		else
		{
			tmp+=".";
			tmp+=tolower(s[i]);
			
		}
	}

	cout<<tmp;
	
return 0;
}

