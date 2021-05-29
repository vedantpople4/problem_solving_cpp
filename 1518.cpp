class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange){
        int full = numBottles;
        int empty = full;
        int sum = full;
        while(full){
            full = empty/numExchange;
            empty = empty%numExchange;
            sum+=full;
            empty+=full;
        }
        return sum;
    }
};

