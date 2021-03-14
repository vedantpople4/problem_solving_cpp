class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int len =0, count=0;
        for(int i=0;i<rectangles.size();i++){
            int k = min(rectangles[i][0],rectangles[i][1]);
            if(k==len) count++;
            else if(k>len){
                count = 1;
                len = k;
            }
        }
        return count;
        
    }
};
