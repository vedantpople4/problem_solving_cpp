class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string retStr = s;
        for(int i = 0; i < indices.size(); i ++){
            retStr[indices[i]] = s[i];
        }
        return retStr;
    }
};
