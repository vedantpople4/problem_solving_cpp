void subset1(int index,vector<vector<int>>& ds,vector<int>& nums,vector<int>& subset)
    {
        ds.push_back(subset);
        for(int i=index;i<nums.size();i++)
        {
            subset.push_back(nums[i]);
            subset1(i+1,ds,nums,subset);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ds;
        vector<int> subset;
        subset1(0,ds,nums,subset);
        return ds;
    }
