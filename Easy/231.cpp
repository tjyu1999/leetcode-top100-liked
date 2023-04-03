# include<iostream>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(int n){
        if(n<1) return false;
        
        while(n>1){
            if(n % 2 != 0) return false;
            n /= 2;
        }
        
        return true;
    }
};

int main(){
    int n = 3;
    cout << Solution().isPowerOfTwo(n) << endl;

    return 0;
}