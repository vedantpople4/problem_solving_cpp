class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ms;
        for(int i=0;i<words.size();++i){
            string tmp="";
            for(int j=0;j<words[i].size();++j){
                tmp+=s[words[i][j]-'a'];
            }
            ms.insert(tmp);
        }
        return ms.size();
    }
};
