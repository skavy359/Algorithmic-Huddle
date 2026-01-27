class Solution {
    public int countPartitions(int[] nums) {
        int sum = 0, temp = 0, ans = 0;
        for (int i : nums)
            sum += i;
        for (int i = 0; i < nums.length - 1; i++) {
            temp += nums[i];
            if ((temp - (sum - temp)) % 2 == 0)
                ans++;
        }
        return ans;
    }
}