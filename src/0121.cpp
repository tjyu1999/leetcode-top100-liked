#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices){
        int buy = prices[0];
        int profit = 0;
        
        for(auto val : prices){
            buy = min(buy, val);
            profit = max(profit, val - buy);
        }
        
        return profit;
    }
};

int main(){
    vector<int> prices;
    int val;
    int target;
    
    while(cin >> val){
        prices.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << Solution().maxProfit(prices) << endl;
}
