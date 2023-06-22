# include<iostream>
using namespace std;

class Solution{
public:
    int climbStairs(int n){
        if(n <= 2) return n;

        int a = 1;
        int b = 2;
        for(int i=2; i<n; i++){
            int tmp = a + b;
            a = b;
            b = tmp;
        }

        return b;
    }
};

int main(){
    int n = 3;
    cout << Solution().climbStairs(n);
}