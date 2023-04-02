# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    vector<int> getRow(int rowIndex){
        vector<vector<int>> result(rowIndex + 1);

        for(int i=0; i<rowIndex + 1; i++){
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

        return result[rowIndex];
    }
};

int main(){
    int rowIndex = 1;
    for(int idx:Solution().getRow(rowIndex)){
        cout << idx << endl;
    }

    return 0;
}