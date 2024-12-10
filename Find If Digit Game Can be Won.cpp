class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum = 0, dsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 9) {
                ssum += nums[i];
            } else if (nums[i] > 9 && nums[i] < 100) {
                dsum += nums[i];
            }
        }
        if (ssum > dsum || dsum > ssum) {
            return true;
        }
        return false;
    }
};
