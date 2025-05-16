class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incr = 1, decr = 1;
        int ans = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1])
                incr++, decr = 1;
            else if (nums[i] < nums[i - 1])
                incr = 1, decr++;
            else
                incr = 1, decr = 1;
            ans = max({ans, decr, incr});
        }
        return ans;
    }
};