class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy = prices[0];

        for (const auto &price: prices) {
            if (price < buy) {
                buy = price;
            } else if (price - buy > maxProfit) {
                maxProfit = price - buy;
            }
        }

        return maxProfit;
    }
};