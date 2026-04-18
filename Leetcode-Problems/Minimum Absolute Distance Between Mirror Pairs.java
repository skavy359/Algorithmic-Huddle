class Solution {
    public int minMirrorPairDistance(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            int rev = reverse(nums[i]);
            if (mp.containsKey(nums[i]))
                ans = Math.min(ans, Math.abs(i - mp.get(nums[i])));
            mp.put(rev, i);
        }
        return ans == Integer.MAX_VALUE ? -1 : ans;
    }

    public int reverse(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
}