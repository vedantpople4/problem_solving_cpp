class Solution {
public:
    int totalMoney(int n) {
        int w = n/7, d = n%7, answer = 0;
        if(w) answer = 28*w+7*(w-1)*w/2;
        if(d) answer += (w*2+d+1)*d/2;
        
        return answer;
    }
};


