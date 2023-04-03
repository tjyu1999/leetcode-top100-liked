# include<iostream>
# include<string>
using namespace std;

class Solution{
public:
    int strStr(string haystack, string needle){
        if(haystack.size() < needle.size()) return -1;
        if(haystack.size() == needle.size()) return haystack == needle ? 0 : -1;
        
        for(int i=0; i <= haystack.size() - needle.size(); i++){
            if(haystack.substr(i, needle.size()) == needle) return i;
        }

        return -1;
    }
};

int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << Solution().strStr(haystack, needle) << endl;

    return 0;
}