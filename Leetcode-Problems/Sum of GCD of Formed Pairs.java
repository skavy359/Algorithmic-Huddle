class Solution {
    public long gcdSum(int[] nums) {
        long mx = nums[0], gc = nums[0];
        long[] arr = new long[nums.length];
        arr[0] = nums[0];
        for (int i = 1; i < nums.length; i++) {
            mx = Math.max(mx, nums[i]);
            gc = gcd((long) mx, (long) nums[i]);
            arr[i] = gc;
        }
        Arrays.sort(arr);
        long sum = 0;
        int l = 0, r = arr.length - 1;
        while (l < r) {
            long temp = gcd(arr[l], arr[r]);
            sum += temp;
            l++;
            r--;
        }
        return sum;
    }

    private long gcd(long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}