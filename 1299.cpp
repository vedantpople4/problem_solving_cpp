class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
       
        for(int i=0;i<arr.size()-1;i++){
            v.push_back(*max_element(arr.begin()+i+1, arr.end()));
        }
        v.push_back(-1);
        return v;
    }
};
