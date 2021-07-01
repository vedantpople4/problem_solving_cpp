class Solution {
    vector<int>arr;
public:
    Solution(vector<int>& nums) {
        arr = nums;
        srand(time(NULL));
    }
    
    
    //SOLUCHAN STARTS HERE - DUN DUN DUN DUN
    int pick(int target) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == target)
                ans.push_back(i);
        }
        
        
        // cout<<rand()%ans.size()<<endl;
        return ans[rand()%ans.size()];
    }
};
