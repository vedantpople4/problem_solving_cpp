class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()==1) 
            return nums;
        vector<int> result;
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        sum = accumulate(nums.begin(),nums.end(),0);
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum -= nums[i];
            count += nums[i];
            result.push_back(nums[i]);
            if(sum < count) 
                return result;
        }
        return result;
    }
};

