class Solution{
public:
    bool isPalindrome(int x){
        if(x < 0) return false;
        
        long rev = 0;
        long tmp = x;
        while(tmp != 0){
            int num = tmp % 10;
            rev = rev * 10 + num;
            tmp /= 10;
        }
        
        return (rev == x);
    }
};
