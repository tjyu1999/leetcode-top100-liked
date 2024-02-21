class Solution{
public:
    bool isValid(string s){
        unordered_map<char, char> map = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        stack<char> st;
        
        for(auto c : s){
            if(c == '(' || c == '[' || c == '{') st.push(c);
            else{
                if(st.empty()) return false;
                char = st.top();
                if(map[] != c) return false;
            }
        }
        
        return st.size() == 0;
    }
};
