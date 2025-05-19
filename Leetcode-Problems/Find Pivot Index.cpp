class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix = 0;
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        for (int i = 0; i < nums.size(); i++) {
            sum -= nums[i];
            if (sum == prefix)
                return i;
            prefix += nums[i];
        }
        return -1;
    }
};
