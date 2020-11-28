#include<bits/stdc++.h>
using namespace std;
void AmusingJoke()
{
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	if (s1.size() + s2.size() != s3.size())
	{
		cout<<"NO";
		return;
	}
	int A[26] = {0};
	for (unsigned i = 0; i < s1.size(); i++)
	{
		A[s1[i] - 'A']++;
	}
	for (unsigned i = 0; i < s2.size(); i++)
	{
		A[s2[i] - 'A']++;
	}
	for (unsigned i = 0; i < s3.size(); i++)
	{
		A[s3[i] - 'A']--;
	}
	bool ok = true;
	for (unsigned i = 0; i < 26 && ok; i++)
	{
		if (A[i] != 0) ok = false;
	}
	if (ok) cout<<"YES";
}
