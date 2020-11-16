#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define sc(n) scanf("%d", &n)
#define sf scanf
#define pf printf
#define MX 1000005
typedef long long ll;
ll a[MX];

int main()
{
    int n, i;
    ll ans1, ans2, cnt1, cnt2;
    while(sc(n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%lld", &a[i]);
        sort(a, a+n);
        cnt1 = cnt2= 0;
        for(i=0; i<n; i++)
        {
            ans1 = a[n-1] - a[0];
            if(a[0]==a[i])
                cnt1++;
            if(a[n-1]==a[i])
                cnt2++;
        }
        if(cnt1==n)
            ans2 = (cnt1*(cnt1-1))/2;
        else
            ans2 = (cnt1*cnt2);
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
