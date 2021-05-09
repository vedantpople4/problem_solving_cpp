class Solution {
public:
    static bool cp(pair<int,int>a,pair<int,int>b)
    {
        return a.first>b.first;
    }
    int minSetSize(vector<int>& arr) {
        int n_want = arr.size()/2;
        int n = arr.size();
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
        {
            ump[arr[i]]++;
        }
        vector<pair<int,int>>pq;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            pq.push_back(make_pair(it->second,it->first));
        }
        sort(pq.begin(),pq.end(),cp);
        int i = 0;
        int s = 0;
        int len = pq[0].first;
        int count = 1;
        // [3,5,2,7]
        while(s< n_want) 
        {
            
            if(len==0)
            {
                count++;
                len = pq[++i].first;
            }
            len--;
            s++;
        }
        return count;
        
    }
};
