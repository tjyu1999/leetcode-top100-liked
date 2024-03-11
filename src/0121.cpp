class Solution{
public:
    int maxProfit(vector<int> &prices){
        int buy = prices[0];
        int profit = 0;
        
        for(auto val : prices){
            buy = min(buy, val);
            profit = max(profit, val - buy);
        }
        
        return profit;
    }
};
