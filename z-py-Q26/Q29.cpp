//buy and sell stock in max price
//this is leetcode Qno 121

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] > minPrice) {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
