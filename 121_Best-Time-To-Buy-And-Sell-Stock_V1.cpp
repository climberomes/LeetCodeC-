class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        
        int lowestCost=prices[0], maxProfit = 0;

        for(int i = 1; i<prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - lowestCost);

            lowestCost = min(lowestCost,prices[i]);
        }

        return maxProfit;
    }
};
