class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int x = 0, y = 0;
        for (int i = 0; i <= n; i++) {
            x ^= i;
        }
        for (int i : nums) {
            y ^= i;
        }
        return x ^ y;
    }
}