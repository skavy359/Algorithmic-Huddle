class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        /* MY NAIVE APPROACH TO THIS QUESTION
         int min = INT_MAX;
         int ans = 0;
         bool zeroisthere = true;
         while (zeroisthere) {
             min = INT_MAX;
             zeroisthere = false;
             for (int i = 0; i < nums.size(); i++) {
                 if (nums[i] < min && nums[i] > 0) {
                     min = nums[i];
                 }
                 if (nums[i] > 0) {
                     zeroisthere = true;
                 }
             }
             for (int i = 0; i < nums.size(); i++) {
                 if (nums[i] > 0)
                     nums[i] = nums[i] - min;
             }
             if (zeroisthere) {
                 ans++;
             }
         }
         return ans;
         */

        unordered_map<int, int> ans;
        for (auto &it : nums) {
            if (it) {
                ans[it]++;
            }
        }
        return (int)ans.size();
    }
};
