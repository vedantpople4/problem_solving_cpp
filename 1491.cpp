class Solution {
public:
    double average(vector<int>& salary) {
        long double ans = 0;
        sort(salary.begin(), salary.end());
        long double sum = accumulate(salary.begin()+1, salary.end()-1,0);
        ans = sum / (salary.size()-2);
        return ans;
    }
};
