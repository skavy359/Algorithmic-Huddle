class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.begin(), prices.end());
        for (int i = 0; i < prices.size(); i++) {
            for (int j = 0; j < prices.size(); j++) {
                if (j > i && prices[j] <= prices[i]) {
                    int res = prices[i] - prices[j];
                    ans[i] = res;
                    break;
                }
            }
        }
        return ans;
    }
};
