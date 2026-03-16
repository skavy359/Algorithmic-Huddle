class Solution {
    public long countCommas(long n) {
        long ans = 0, power = 1000;
        for (int i = 1; i <= 5; i++) {
            if (n >= power) {
                ans += (n - power + 1);
            }
            power *= 1000;
        }
        return ans;
    }
}