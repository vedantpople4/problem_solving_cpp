class Solution {
public:
    int balancedStringSplit(string s) {
        int balancedCount=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')count++;
            else if(s[i]=='R')count--;
        
                if(count==0){
                    ++balancedCount;
        }
        }
    return balancedCount;
    }
};
