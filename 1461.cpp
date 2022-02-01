bool hasAllCodes(string s, int k) {
        int n=pow(2,k);
        set<string>se;
        if(s.length()<k)
        {
            return false;
        }
        for(int i=0;i<=s.length()-k;i++)
        {
            se.insert(s.substr(i,k));
        }
        if(se.size()>=n)
        {
            return true;
        }
        return false;
    }
};
