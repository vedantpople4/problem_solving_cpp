class Solution {
public:
    int lengthOfLongestSubstring(string str) {
      if(str.size()==0) return 0;
     int i=0,j=0,mx=0;
        set<char>s;
        while(i<str.length()){
            char c= str[i];
            while(s.count(c)){
                s.erase(str[j]);
            ++j;
            }
            s.insert(c);
            mx= max(mx, i-j+1);
            ++i;
        }
        return mx;
    }
};
