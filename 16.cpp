class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int d=INT_MAX;
        
        for(int i=0;i<n-2;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<d){
                    d = abs(sum-target);
                    ans = sum;
                }
                if(sum==target) return sum;
                else if(sum>target) r--;
                else l++;
            }
        }
        return ans;
    }
};
