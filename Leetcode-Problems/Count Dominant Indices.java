class Solution {
    public int dominantIndices(int[] nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        int n = nums.length - 1;
        int ans = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] > (sum - nums[i]) / n) {
                ans++;
            }
            n--;
            sum -= nums[i];
        }
        return ans;
    }
}