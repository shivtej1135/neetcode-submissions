class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buyingPrice = prices[0]
        maxProfit = 0
        for i in range(1,len(prices)):
            currProfit = prices[i] - prices[i-1]
            if(currProfit>0):
                maxProfit = maxProfit + currProfit
                buyingPrice = prices[i]
            else:
                buyingPrice = prices[i]
        return maxProfit
            
        

        