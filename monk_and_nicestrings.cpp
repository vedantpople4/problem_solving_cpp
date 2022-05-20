#include<bits/stdc++.h>

#include <iostream>

using namespace std;


 

int n,i,j;

multiset <string> se;

multiset <string>::iterator it;

int main() {

    cin >> n;

    string s;

    int k;

    for(i=0;i<n;++i){

        cin>>s;

        k=0;

        for(it = se.begin();it!=se.end();++it){

            k+=(*it<s);

        }

        cout<<k<<endl;

        se.insert(s);

    }

    return 0;

}

