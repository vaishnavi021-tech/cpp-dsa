// Problem : Buy and Sell Stock
// Approach : Track minimum price and calculate max profit
// Time Complexity : O(n)
// Space Complexity : O(1)
// Description : Track the best buy-sell opportunity in a single pass by maintaining the minimum price so far and updating the maximum profit.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>prices) {
    if(prices.empty()) return 0;

    int n = prices.size();

    int maxProfit = 0;
    int bestBuy = prices[0];

    for(int i=1; i<n; i++) {
        maxProfit = max(maxProfit, prices[i]-bestBuy);

        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    vector<int>prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit : " << maxProfit(prices) << endl;
    return 0;
}