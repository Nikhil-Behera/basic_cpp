#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;  // Edge case: if prices is empty

        int min_price = prices[0];     // Initialize with the first price
        int max_profit = 0;            // Initialize the maximum profit to 0

        // Traverse through the price array
        for (int i = 1; i < prices.size(); i++) {
            // If the current price is less than the min_price, update min_price
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
            // Calculate the current profit
            int current_profit = prices[i] - min_price;

            // Update max_profit if current_profit is greater
            max_profit = max(max_profit, current_profit);
        }

        return max_profit;  // Return the maximum profit found
    }
};
