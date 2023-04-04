# include<iostream>
# include<string>
using namespace std;

class Solution{
public:
    int lengthOfLastWord(string s){
        int len = 0;
        int tail = s.length() - 1;

        while(tail >= 0 && s[tail] == ' ') tail--;
        while(tail >= 0 && s[tail] != ' '){
            tail--;
            len++;
        }

        return len;
    }
};

int main(){
    string s = "luffy is still joyboy";
    cout << Solution().lengthOfLastWord(s) << endl;

    return 0;
}