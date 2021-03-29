class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int> v(size, cost[0]);
        v[1] = cost[1];
        for(int i=2;i<size;i++) 
            v[i] = cost[i] + min(v[i-1],v[i-2]);
        return min(v[size-1],v[size-2]);
    }
};
