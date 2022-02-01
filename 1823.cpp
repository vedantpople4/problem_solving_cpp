class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans;
        string s;
        for(int i=1;i<=n;i++) ans.push_back(i);
        int j=0;
        while(ans.size()!=1){
            int len = ans.size();
            int i = j;
            j = (j+k-1)%len;
            ans.erase(ans.begin()+j);
            j--;
            int len1 = ans.size();
            j = (j+1)%len1;
        }
        return ans[0];
    }
};
