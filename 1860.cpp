class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        vector<int> v;
        int i=0;
        while(true){
            if(i>m1 && i>m2) break;
            if(m1>=m2) m1-=i;
            else m2-=i;
            i++;
        }
        v = {i, m1, m2};
        return v;
    }
};
