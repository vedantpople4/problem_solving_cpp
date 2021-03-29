class Solution {
public:
    bool isSub(string s1, string s2, int m, int n){
        if(m==0) return true;
        if(n==0) return false;
        if(s1[m-1]==s2[n-1]) return isSub(s1,s2,m-1,n-1);
        return isSub(s1,s2,m,n-1);
    }
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSub(s,t,m,n);
    }
}
