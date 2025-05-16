class Solution {
public:
    bool check(int a, int k) {
        if (a >= k) {
            return true;
        }
        return false;
    }
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (!check(nums[i], k)) {
                nums.pop_back();
                count++;
            }
        }
        return count;
    }
};
