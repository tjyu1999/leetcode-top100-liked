# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> result(numRows);

        for(int i=0; i<numRows; i++){
            result[i].resize(i + 1);

            if(i==0){
                result[i][0] = 1;
            }
            else if(i==1){
                result[i][0] = 1;
                result[i][1] = 1;
            }
            else if(i>1){
                result[i][0] = 1;
                result[i][i] = 1;
                for(int j=1; j<i; j++){
                    result[i][j] = result[i-1][j-1] + result[i-1][j];
                }
            }
        }

        return result;
    }
};

int main(){
    int numRows = 5;
    vector<vector<int>> result = Solution().generate(numRows);

    for(int i=0; i<numRows; i++){
        for(int j=0; j<result[i].size(); j++){
            cout << result[i][j] << endl;
        }
    }

    return 0;
}