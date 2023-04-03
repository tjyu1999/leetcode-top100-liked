# include<iostream>
# include<string>
# include<unordered_map>
using namespace std;

class Solution{
public:
    int romanToInt(string s){
        unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int prev = 0;
        int total_num = 0;

        for(auto symbol : s){
            int num = map[symbol];
            if(prev >= num) total_num += num;
            else{
                total_num += (num - 2 * prev);
            }
            prev = num;
        }

        return total_num;
    }
};

int main(){
    string s = "MCMXCIV";
    int num = Solution().romanToInt(s);
    cout << num << endl;

    return 0;
}