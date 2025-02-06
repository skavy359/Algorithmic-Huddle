class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> ans;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int product = nums[i] * nums[j];
                temp += 8 * ans[product];
                ans[product]++;
            }
        }
        return temp;
    }
};