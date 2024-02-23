class Solution{
public:
    int climbStairs(int n){
        if(n <= 2) return n;
        
        int a = 1;
        int b = 2;
        for(int i = 2; i < n; i++){
            b = a + b;
            a = b - a;
        }
        
        return b;
    }
};
