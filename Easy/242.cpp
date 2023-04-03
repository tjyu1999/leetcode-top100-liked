# include<iostream>
# include<string>
using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t){
        if(s.size() != t.size()){
            return false;
        }

        int check[26] = {0};
        for(int i=0; i<s.size(); i++){
            check[s[i] - 'a'] += 1;
        }
        for(int i=0; i<t.size(); i++){
            if(check[t[i] - 'a'] > 0){
                check[t[i] - 'a'] -= 1;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout << Solution().isAnagram(s, t) << endl;

    return 0;
}