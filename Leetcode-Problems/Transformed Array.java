class Solution {
    public int[] constructTransformedArray(int[] nums) {
        int[] ans = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            int steps = nums[i];
            if (steps == 0) {
                ans[i] = nums[i];
            } else {
                steps = (i + steps) % nums.length;
                if (steps < 0) {
                    steps += nums.length;
                }
                ans[i] = nums[steps];
            }
        }
        return ans;
    }
}