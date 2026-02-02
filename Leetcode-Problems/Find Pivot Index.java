class Solution {
    public int pivotIndex(int[] nums) {
        int total = 0;
        for (int i = 0; i < nums.length; i++)
            total += nums[i];
        int running_sum = 0;
        for (int i = 0; i < nums.length; i++) {
            if (running_sum == total - running_sum - nums[i]) {
                return i;
            }
            running_sum += nums[i];
        }
        return -1;
    }
}