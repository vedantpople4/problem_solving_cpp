class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        int sum = coins;
        sort(costs.begin(), costs.end());
        for(int i=0;i<costs.size();i++){
            if(sum-costs[i]>=0){
                ans++;
                sum-=costs[i];
            }
        }
        return ans;
    }
};
