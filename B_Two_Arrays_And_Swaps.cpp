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

#define fr(i, b, c) for (int i=(b); i < (c); i++) 
#define fre(a, b, c) for (int(a)=(b); (a) <= (c); ++(a)) 
#define frn(a, b, c) for (int(a)=(b); (a) >= (c); --(a)) 
#define frs(a, b, c) for (int(a)=(b); (a) * (a) <= (c); ++(a)) 
#define frc(a, b, c) for (char(a)=(b); (a) <= (c); ++(a)) 
typedef long long ll;
#define testcase long long t; cin>>t;

int main()
{
    testcase;
    while(t--){
        int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<int> b(n);
		for (auto &it : b) cin >> it;
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			if (i < k) ans += max(a[i], b[i]);
			else ans += a[i];
		}
		cout << ans << endl;
    }
    return 0;
}