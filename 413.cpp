class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int dp[n+1];
        dp[0]=0, dp[1]=0;
        for(int i=2;i<n;i++){
            if(2*nums[i-1] == nums[i-2]+nums[i]){
                dp[i] = dp[i-1]+1;
                count+=dp[i];
            }
            else dp[i] = 0;
        }
        return count;
    }
};


