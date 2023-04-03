# include<iostream>
# include<string>
# include<unordered_map>
# include<stack>
using namespace std;

class Solution{
public:
    bool isValid(string s){
        unordered_map<char, char> pair = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        stack<char> res;

        for(auto par : s){
            if(par=='(' || par=='[' || par=='{'){
                res.push(par);
            }
            else{
                if(res.empty()) return false;
                char top = res.top();
                res.pop();
                if(pair[top] != par) return false;
            }
        }
        
        return res.size() == 0;
    }
};

int main(){
    string s ="()[]{}}{";
    cout << Solution().isValid(s) << endl;

    return 0;
}