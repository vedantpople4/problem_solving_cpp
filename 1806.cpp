class Solution {
public:
    int reinitializePermutation(int n) {
        int ans=0;
        vector<int> per(n),arr(n),org(n);
        for(int i=0;i<n;i++)per[i] = i;
        org = per;
        while(1){
        for(int i=0;i<n;i++)
            arr[i] = (i&1 ? per[n/2 + (i-1)/2] : per[i/2]);
            ans++;
            if(arr==org) break;
            per = arr;
        }
        return ans;
    
    }
};

