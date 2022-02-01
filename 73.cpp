class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
        vector<int> row,column;
        int n = A.size();
        if(n == 0)
            return;
        int m = A[0].size();
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(A[i][j] == 0)
                {
                   row.push_back(i);
                   column.push_back(j);
                }
            }
        }
        
        for(int i=0; i<row.size(); i++)
        {
            for(int j=0; j<m; j++)
            {
               A[row[i]][j]=0;
            }
        }
         for(int i=0; i<column.size(); i++)
        {
            for(int j=0; j<n; j++){
                A[j][column[i]]=0;
            }
         }
        
    }
};
       
