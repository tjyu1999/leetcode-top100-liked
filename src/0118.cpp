#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> res(numRows);
        
        for(int i = 0; i < numRows; i++){
            res[i].resize(i + 1, 1);
            for(int j = 1; j < i; j++) res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }

        return res;
    }
};

int main(){
    int numRows;
    
    cin >> numRows;
    vector<vector<int>> res = Solution().generate(numRows);
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < i + 1; j++) cout << res[i][j] << " ";
        cout << endl;
    }
}
