#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int w = (a+b)*c;
	int x = a*b*c;
	int y = a*(b+c);
	if(w>y && w>x)
	cout<<w;
	else if (y>w && y>x)
	cout<<y;
	else
	cout<<x;
		
	
	return 0;
}
