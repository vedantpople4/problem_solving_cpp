class Solution {
public:
    vector<vector<int>> res;
    vector<int> curr;
    int sum;
    int count;
     void fun(int k,int n, int idx){
        if(count >k || sum > n)
            return;
        if(count == k && sum == n) {
            res.push_back(curr);
        }
        for (int i = idx;i <=9;i++) {
            sum+=i;
            count++;
            curr.push_back(i);
            fun(k,n,i+1);
            sum-=i;
            count--;
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        sum =0;
        count=0;
        fun(k,n,1);
        return res;
    }
};
