class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() <= 2) {
            return -1;
        }
        int min = INT_MAX, min2 = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                min2 = min;
                min = nums[i];
            } else if (nums[i] < min2 && nums[i] > min) {
                min2 = nums[i];
            }
        }
        return min2;
    }
};
