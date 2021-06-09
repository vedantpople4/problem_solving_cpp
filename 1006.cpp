class Solution {
public:
    int lowerValues[5] = {0, 1, 2, 6, 7}, rest[4] = {1, 2, 2, -1};
    int clumsy(int n) {
        if (n < 5) return lowerValues[n];
        else return n + rest[n % 4];
    }
};
