class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<t.size();j++){
                int x = i;
                int y = j;
                int temp = 0;
                while(x<s.size() && y<t.size()){
                    if(s[x]!=t[y])temp++;
                    if(temp==1) ans++;
                    if(temp>=2) break;
                    x++;
                    y++;
                }
            }
        }
        return ans;
    }
};
