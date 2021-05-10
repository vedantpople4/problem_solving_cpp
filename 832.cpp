class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        for(int i=0;i<a.size();i++){
            reverse(a[i].begin(), a[i].end());
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==0) a[i][j]=1;
                else a[i][j]=0;
            }
        }
        return a;
    }
};
