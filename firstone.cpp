#include<iostream>
using namespace std;
#define INT_MAX 100000001

int main()
{
    int n, min = INT_MAX, count=0, f=0;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<min) min = a[i];
    }
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        while(a[i]>min && b[i]!=0){
            a[i]-=b[i];
            count++;
        }
        if(a[i]<min){
            min = a[i];
            i-=1;
        }
        if(a[i]<0){
            f-=1;
            break;
        }
    }
    if(f==-1) cout<<"-1"<<endl;
    else cout<<count<<endl;

    return 0;
}