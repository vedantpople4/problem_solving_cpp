#include<iostream>
using namespace std;


int main()
{
char c[10002];
long i,r,a[1000];	
 cin>>c;
 for(i=0;c[i];i++)
  a[c[i]]=1;
 for(i=0;i<300;i++)
  r+=a[i];
 if(r%2==1)
 cout<<"IGNORE HIM!";
 else
 cout<<"CHAT WITH HER!";
}
