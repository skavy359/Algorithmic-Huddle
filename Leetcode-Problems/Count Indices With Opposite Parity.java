class Solution {
    public int[] countOppositeParity(int[] nums) {
        int odds = 0, evens = 0;
        for (int i : nums) {
            if (i % 2 == 0)
                evens++;
            else
                odds++;
        }
        int[] ans = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 != 0) {
                ans[i] = evens;
                odds--;
            } else {
                ans[i] = odds;
                evens--;
            }
        }
        return ans;
    }
}