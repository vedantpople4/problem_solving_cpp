#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
   int n,k,w;
   cin>>k,n,w,b;
   int count=0;
   for(int i=0;i<w;i++)
   {
   	count += i*k;
   }
   b = count-n;
   cout<<b;
}
