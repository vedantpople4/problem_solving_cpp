class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int sum =0;
        for(int i = 0; i < nums.size();i++) m[nums[i]]++;
        for(int i = 0 ; i <= 100; i++){
            if(m[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};
