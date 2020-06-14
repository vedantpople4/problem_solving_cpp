#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,n,maxpos = 0,minpos = 0,chek1 = -9999,chek2 = 9999;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a > chek1){
            chek1 = a;
            maxpos = i;
        }
        if(a <= chek2){
            chek2 = a;
            minpos = i;
        }
    }
    cout << maxpos + (n-1-minpos) - ((minpos < maxpos) ? 1 : 0);
}
