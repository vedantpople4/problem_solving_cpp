#include<bits/stdc++.h>
using namespace std;

string ROT13(string source){
	string ans;
	for(size i=0; i<source.sice(); ++i){
		if (isalpha(source[i])) {
			if ((tolower(source[i]) - 'a') < 14)
				transformed.append(1, source[i] + 13);
			else
				transformed.append(1, source[i] - 13);
		} else {
			transformed.append(1, source[i]);
		}
	}
	return transformed;
	
}

int main() {
    string source;
    cin>>source;
    cout << ROT13(source);

    return 0;
}

