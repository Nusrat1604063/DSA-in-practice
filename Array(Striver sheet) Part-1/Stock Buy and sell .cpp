//
// Created by Tabassum Akter Nusrat on 7/8/25.
//
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprice = prices[0];
        for(int i=1;i<prices.size(); i++) {
            minprice = min(minprice, prices[i-1]);
            maxprofit = max(maxprofit, prices[i] - minprice);

        }

        return maxprofit;
    }
};