class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        for(int r=0;r<box.size();r++){
            int i=0,j=0,n=box[0].size();
            while(i<n){
                if(box[r][i]=='*'){
                    i=j=i+1;
                    continue;
                }
                while(j<i && box[r][j]!='#'){
                    j++;
                }
                if(j<i && box[r][j]=='#' && box[r][i]=='.'){
                    box[r][j]='.';
                    box[r][i]='#';
                    j++;
                }
                i++;
            }
        }
        vector<vector<char>> res(box[0].size(),vector<char>(box.size()));
        for(int r=box.size()-1;r>=0;r--){
            for(int c=0;c<box[0].size();c++){
                res[c][box.size()-1-r]=box[r][c];
            }
        }
        return res;
        
    }
};
