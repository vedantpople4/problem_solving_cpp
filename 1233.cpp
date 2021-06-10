class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> ans;
        string s = folder[0];
        int sz = s.size();
        ans.push_back(s);
        for(int i=1;i<folder.size();i++){
            if(folder[i].find(s)==0 && folder[i][sz]=='/'){
               continue;
            }
            else {
                s = folder[i];
                sz = s.size();
                ans.push_back(s);
            }
        }
        return ans;
    }
};
