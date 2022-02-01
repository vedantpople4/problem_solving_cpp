class Solution {
public:
    int numTeams(vector<int>& dp) {
        int n = dp.size();
        int m=0,l,r;
        for(int i=1;i<n-1;i++){
            l=0,r=0;
            for(int j=i-1;j>=0;j--)
                l+=(dp[j]<dp[i]);
            for(int j=i+1;j<n;j++)
                r+=(dp[j]<dp[i]);
            m+=l*(n-i-1-r) + (i-l)*r;
            }
        return m;
    }
};
