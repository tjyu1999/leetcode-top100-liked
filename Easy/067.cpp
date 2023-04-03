# include<iostream>
# include<string>
using namespace std;

class Solution{
public:
    string addBinary(string a, string b){
        if(a.length() < b.length()) return addBinary(b, a);

        for(int i=0; i < a.length(); i++){
            if(i < b.length()) a[a.length() - i - 1] += b[b.length() - i - 1] - '0';
            if(i == a.length() - 1)
                if(a[0] > '1') a.insert(a.begin(), '0');
            while(a[a.length() - i - 1] > '1'){
                a[a.length() - i - 1] -= 2;
                a[a.length() - i - 2] += 1;
            }
        }

        return a;
    }
};

int main(){
    string a = "1010";
    string b = "1011";
    cout << Solution().addBinary(a, b) << endl;

    return 0;
}