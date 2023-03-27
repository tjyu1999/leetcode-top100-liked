# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

class Solution{
    public:
    vector<int> plusOne(vector<int>& digits){
        for (int i=digits.size()-1; i >= 0; i--){
            if(++digits[i] %= 10){
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

int main() {
    vector<int> digits = {9, 9, 9};
    
    for(int idx:Solution().plusOne(digits)){
        cout << idx << endl;
    }
    
    return 0;
}
