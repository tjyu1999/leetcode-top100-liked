class Solution{
public:
    vector<string> letterCombinations(string digits){
        if(digits.empty()) return {};
        
        vector<string> res;
        dfs(digits, 0, "", res);
        
        return res;
    }
    
private:
    const vector<string> letters{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void dfs(string& digits, int depth, string&& path, vector<string>& res){
        if(depth == digits.length()){
            res.push_back(path);
            return;
        }
        
        for(char letter : letters[digits[depth] - '0']){
            path.push_back(letter);
            dfs(digits, depth + 1, move(path), res);
            path.pop_back();
        }
    }
};
