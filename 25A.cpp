Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.


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
