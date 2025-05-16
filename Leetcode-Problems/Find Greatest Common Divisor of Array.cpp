class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int smallest =
            (nums[0] < nums[nums.size() - 1]) ? nums[0] : nums[nums.size() - 1];
        for (int i = 1; i <= smallest; i++) {
            if (nums[0] % i == 0 && nums[nums.size() - 1] % i == 0) {
                ans = i;
            }
        }
        return ans;
    }
};
