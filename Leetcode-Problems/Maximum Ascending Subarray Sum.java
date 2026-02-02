class Solution {
    public int maxAscendingSum(int[] nums) {
        int ans = 0, temp = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]) {
                ans = Math.max(ans, temp);
                temp = 0;
            }
            temp += nums[i];
        }
        ans = Math.max(ans, temp);
        return ans;
    }
}