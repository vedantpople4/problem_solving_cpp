class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        bool flag = true;
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        for(int i=0;i<target.size();i++)
            if(target[i]!=arr[i])
            {
                flag = false;
                break;
            }
         return flag;
    }
};
