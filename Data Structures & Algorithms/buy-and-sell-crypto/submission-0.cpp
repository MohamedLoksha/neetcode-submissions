class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maxP{};
        for (int l{}, r = 1; r < size; r++) {
            if (prices[r] < prices[l]) {
                l = r;
                continue;
            }
            int profit = prices[r] - prices[l];
            if (profit > maxP) maxP = profit;
        }
        return maxP;
    }
};