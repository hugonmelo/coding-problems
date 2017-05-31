#include <limits>
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int min_price = std::numeric_limits<int>::max();
        int max_profit = 0;
        while(i < prices.size())
        {
            if(prices[i] < min_price)
            {
                min_price = prices[i];
            }
            if(prices[i] - min_price > max_profit)
            {
                max_profit = prices[i] - min_price;
            }
            ++i;
        }
        return max_profit;
    }
};