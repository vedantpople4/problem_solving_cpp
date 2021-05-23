class Solution {
public:
    double myPow(double x, long n) {
        if(n==0)return (double)1;
        bool sign=(n<0);
        n=abs(n);
        double xn=x;
        n--;    //it is already one power;
        while(n>0){
            double temp=xn;
                long i=1;
            while(i<=n){
                x*=temp;
                n-=i;
                i<<=1;
                temp*=temp;
            }
        }
        
        return sign?(1.0/x):x; 
        
    }
};
