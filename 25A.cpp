#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
      while(cin>>n>>m)
      {
    int minn=min(n,m);
       if(minn%2==0)
         printf("Malvika\n");
       else 
         printf("Akshat\n");
     }
     return 0;
}
