class Solution {
public:
    int maximumScore(int a, int b, int c) {
        if (a+b<c) return a+b;
        else if (b+c<a) return b+c;
        else if(a+c<b) return a+c;
        else return (a+b+c)/2;
    }
};
