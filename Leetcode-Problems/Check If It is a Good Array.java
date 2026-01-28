class Solution {
    public int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public boolean isGoodArray(int[] nums) {
        int temp = nums[0];
        for (int i : nums) {
            temp = gcd(temp, i);
        }
        return temp == 1;
    }
}