#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

#define fr(a, b, c) for (int(a)=(b); (a) < (c); ++(a)) 
#define fre(a, b, c) for (int(a)=(b); (a) <= (c); ++(a)) 
#define frn(a, b, c) for (int(a)=(b); (a) >= (c); --(a)) 
#define frs(a, b, c) for (int(a)=(b); (a) * (a) <= (c); ++(a)) 
#define frc(a, b, c) for (char(a)=(b); (a) <= (c); ++(a)) 
typedef long long ll;
#define testcase long long t; cin>>t; while(t--);

int main()
{
testcase;
while(t--){
    ll w,h,n;
    cin>>w>>h>>n;
    if(n==1) cout<<"YES"<<endl;
    else{
        ll count1 = 0, count2=0;
        while(w!=1){
            w/=2;
            count1++;
        }
        while(h!=1){
            h/=2;
            count2++;
        }
        if(count1+count2>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
return 0;
}



