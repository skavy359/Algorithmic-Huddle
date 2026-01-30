class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ans = 0, temp = 0;
        for (int i : nums) {
            if (i == 1)
                temp++;
            else {
                ans = Math.max(ans, temp);
                temp = 0;
            }
        }
        ans = Math.max(ans, temp);
        return ans;
    }
}