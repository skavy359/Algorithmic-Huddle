class Solution {
    public boolean isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    public int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int set = 0;
            int temp = i;
            while (temp > 0) {
                set += (temp & 1);
                temp >>= 1;
            }
            if (isPrime(set)) {
                ans++;
            }
        }
        return ans;
    }
}