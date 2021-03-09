class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult=1, sum=0;
        while(n!=0){
            sum += n%10;
            mult *= n%10;
            n /= 10;
            
        }
        return mult-sum;
    }
};
