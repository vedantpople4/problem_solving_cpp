class Solution {
public:
    int sumdigits(int n){
        int x=n;
        int y=0;
        int ans = 0;
        while(n!=0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> m;
        int ans = 0;
        for(int i = lowLimit; i<=highLimit;i++){
            int box = sumdigits(i);
            ans = max(++m[box], ans);
        }
        return ans;
    }
};
