class Solution {
    public long minEnd(int n, int x) {
        int count = 1;
        long ans = x;
        int i = 1;
        while (count != n) {
            int num = x + i;
            if ((num & x) == x) {
                ans = num;
                count++;
            }
            i++;
        }
        return ans;
    }
}

class Solution {
    public long minEnd(int n, int x) {
        long ans = x;
        n--;
        int bit = 0;
        while (n > 0) {
            if ((ans & (1L << bit)) == 0) {
                if ((n & 1) == 1) {
                    ans |= (1L << bit);
                }
                n >>= 1;
            }
            bit++;
        }
        return ans;
    }
}