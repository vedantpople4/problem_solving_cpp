class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = INT_MIN;
        int len = nums.size();
        for(int i=0;i<len/2;i++){
            int mid = nums[i] + nums[len-i-1];
            if(sum<mid) sum = mid;
        }
        return sum;
    }
};

