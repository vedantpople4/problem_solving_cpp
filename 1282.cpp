class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> mp;
        
        for(int i = 0; i < groupSizes.size(); ++i)
        {
            mp[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>> ans;
        
        for(auto it: mp)
        {
            int key = it.first;             //limit of a group
            auto personsList = it.second;   //iterator to list of persons
            vector<int> temp;               //temporary array to store the group
            
            for(int i = 0; i < personsList.size(); ++i)
            {
                temp.push_back(personsList[i]);
                if(temp.size() == key)
                {
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return ans;
    } 
};
