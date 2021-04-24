int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalDiff=0,diff=0;
        int index=0;
        
        for(int i=0;i<n;i++){
            diff+=gas[i] - cost[i];
            totalDiff+=gas[i] - cost[i];
            
            if(diff < 0){
                diff=0;
                index=i+1;
            }
        }
    return (totalDiff >= 0) ? index:-1;
    }
