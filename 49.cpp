class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        map<multiset<char>, vector<string>> mp;
        for(int i=0; i<strs.size(); i++)
        {
            string s = strs[i];
            int j=0;
            multiset<char> ms;
            while(j<s.size())
            {
                ms.insert(s[j]);
                j++;
            }
            mp[ms].push_back(s);
        }
        map<multiset<char>, vector<string>> :: iterator itr;
        for(itr=mp.begin(); itr!=mp.end(); itr++)
            res.push_back(itr->second);
        return res;
    }
};
