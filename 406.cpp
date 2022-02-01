#define pii pair<int,int>
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        priority_queue <pii,vector<pii>, greater<pii>> pq ;
        int n = people.size() ;
        vector<vector<int>> out(n,vector<int>(2,-1)) ;
        
        for(auto x : people) pq.push({x[0], x[1]});
        
        int base =n ;
        int prev = 0 ; 
        while(!pq.empty()){ 
            pii temp = pq.top();
            pq.pop(); 
            int count = temp.second ;
            for(int i=0; i<n ;i++){
                if(out[i][0] != -1 && out[i][0] != temp.first) continue ;
                
                if(count == 0){
                    out[i][0] = temp.first ;
                    out[i][1]  = temp.second ; 
                    break; 
                }
                count --; 
            }
        }
        return out ; 
    }
};
