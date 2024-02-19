class Solution{
public:
    int romanToInt(string s){
        unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int val;
        int prev = 0;
        int res = 0;

        for(auto symbol : s){
            val = map[symbol];
            if(prev >= val) res += val;
            else res += (val - 2 * prev);
            prev = val;
        }

        return res;
    }
};
