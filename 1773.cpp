class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        if(ruleKey=="type")
        {
        for(int i=0;i<items.size();i++){
        if(items[i][0]==ruleValue)
            ans++;}
        }
        if(ruleKey=="color"){
        for(int i=0;i<items.size();i++){
        if(items[i][1]==ruleValue)
            ans++;}
        }
        if(ruleKey=="name"){
        for(int i=0;i<items.size();i++){
        if(items[i][2]==ruleValue)
            ans++;}
        }
        return ans;
    }
};
