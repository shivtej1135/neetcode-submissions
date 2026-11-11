class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            buyingPrice = min(buyingPrice,prices[i]);
            maxProfit = max(maxProfit,prices[i]-buyingPrice);
        }
        return maxProfit;
    }
};
