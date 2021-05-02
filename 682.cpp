class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans=0;
        stack<int> s;
        for(auto it:ops){
            if(it=="+"){
                int val1 = s.top();
                s.pop();
                int val2 = s.top();
                s.push(val1);
                s.push(val1+val2);
            }
            else if(it=="D") s.push(s.top()*2);
            else if(it=="C") s.pop();
            else s.push(stoi(it));
        }
        while(!s.empty()){
            int temp = s.top();
            ans+=temp;
            s.pop();
        }
        return ans;
    }
};
