class Solution {
    public int minimumPrefixLength(int[] nums) {
        int i;
        for (i = nums.length - 1; i > 0; i--) {
            if (nums[i - 1] >= nums[i]) {
                break;
            }
        }
        return i;
    }
}