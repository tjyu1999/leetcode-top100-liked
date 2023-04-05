# include<iostream>
using namespace std;

class Solution{
public:
    bool isPowerOfFour(int n){
        if(n < 1) return false;

        while(n > 1){
            if(n % 4 == 0) n /= 4;
            else return false;
        }

        return true;
    }
};

int main(){
    int n = 16;
    cout << Solution().isPowerOfFour(n);

    return 0;
}