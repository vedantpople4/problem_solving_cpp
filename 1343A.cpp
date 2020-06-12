#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int pw = 2; pw < 30; ++pw) {
			int val = (1 << pw) - 1;
			if (n % val == 0) {
				cerr << val << endl;
				cout << n / val << endl;
				break;
			}
		}
	}
	return 0;
}

