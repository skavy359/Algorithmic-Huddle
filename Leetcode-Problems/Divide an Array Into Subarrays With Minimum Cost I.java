class Solution {
    public int minimumCost(int[] nums) {
        int fir = Integer.MAX_VALUE, sec = Integer.MAX_VALUE;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < fir) {
                sec = fir;
                fir = nums[i];
            } else if (nums[i] < sec) {
                sec = nums[i];
            }
        }
        return nums[0] + fir + sec;
    }
}