class Solution {
public:
    bool mila = false;
    
    void help(string s, int strt, vector<string>&V)
    {
        if(strt == s.size())
        {
            if(!mila and V.size()>1)
                mila = true;
        }
        
        string t;
        
        for(int i=strt;i<s.size();i++)
        {
            t += s[i];
            if(V.size())
            {
                long long a, b;
				// Used try catch to handle stoll() out of range error
                try{
                    a = stoll(V.back());
                    b = stoll(t);
                    if(a>b and a-b==1)
                    {
                        V.push_back(t);
                        help(s, i+1, V);
                        V.pop_back();
                    }
                }
                catch(...)
                {
                  continue;
                }
            }
            else
            {
                V.push_back(t);
                help(s, i+1, V);
                V.pop_back();
            }
        }
    }
    
    bool splitString(string s) {
        vector<string>V;
        help(s, 0, V);
        return mila;
    }
};
