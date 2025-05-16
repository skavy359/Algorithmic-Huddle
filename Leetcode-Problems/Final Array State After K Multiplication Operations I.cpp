class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int minval = INT_MAX;
            int minindex = -1;
            for (int j = 0; j < nums.size(); j++) {
                if (minval > nums[j]) {
                    minval = nums[j];
                    minindex = j;
                }
            }
            nums[minindex] *= multiplier;
        }
        return nums;
    }
};
