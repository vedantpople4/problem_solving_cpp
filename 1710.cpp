class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        int ans = 0;
        sort(bt.begin(), bt.end(),
            [&](const vector<int>& a, const vector<int>& b) {
              return a[1] > b[1];
        });
        
        for(auto& p : bt) {
            if(ts <= 0) break;
            ans += min(ts, p[0]) * p[1];
            ts -= p[0];
        }
        return ans;
    }
};


