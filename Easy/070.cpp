# include<iostream>
using namespace std;

class Solution{
public:
    int climbStairs(int n){
        int arr[2] = {0, 1};
        int val;

        if(n < 2) return arr[n];
        else{
            for(int i=1; i<=n; i++){
                val = arr[0] + arr[1];
                arr[0] = arr[1];
                arr[1] = val;
            }
        }

        return val;
    }
};

int main(){
    int n = 3;
    cout << Solution().climbStairs(n) << endl;

    return 0;
}