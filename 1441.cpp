class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int i=0,x=1;
        while(i<=target.size()-1){
            v.push_back("Push");
            if(target[i]==x)
                i++;
            else 
                v.push_back("Pop");
            x++;
        }
        return v;
    }
};
