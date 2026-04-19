class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int[] maxi = new int[nums.length];
        int[] mini = new int[nums.length];
        maxi[0] = nums[0];
        for (int i = 1; i < nums.length; i++) {
            maxi[i] = Math.max(maxi[i - 1], nums[i]);
        }
        mini[nums.length - 1] = nums[nums.length - 1];
        for (int i = nums.length - 2; i >= 0; i--) {
            mini[i] = Math.min(mini[i + 1], nums[i]);
        }
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            int instability = maxi[i] - mini[i];
            if (instability <= k) {
                ans = Math.min(ans, i);
            }
        }
        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}