class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = nums[0], sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
           sum+=nums[i];
            if(nums[i]<=nums[i-1])
                nums[i] = nums[i-1]+1;
            ans+=nums[i];
        
        }
        return (ans-sum);
    
    }
};


