class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int i = nums.size() - 1; i >= 0; i--) {
            int temp = nums[i];
            while (temp) {
                int rem = temp % 10;
                ans.push_back(rem);
                temp=temp/10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
