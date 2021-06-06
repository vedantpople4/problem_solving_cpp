class Solution {
public:
    int find(int n)
    {
        int d=(int)sqrt(n);
        for(;n%d!=0;)
        {
            d--;
        }
        return d;
    }
    vector<int> closestDivisors(int num) 
    {
        int num1=num+1;
        int num2=num+2;
        int d1=find(num1);
        int d2=find(num2);
        if(abs(d1-(num1)/d1)<abs(d2-(num2)/d2))
        {
            return {d1,num1/d1};
        }
        return {d2,num2/d2};
    }
};
