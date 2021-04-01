class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> v;
        for(int i=0;i<heights.size();i++){
            v.push_back(heights[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=heights[i]) ans++;
        }
        return ans;
    }
};
