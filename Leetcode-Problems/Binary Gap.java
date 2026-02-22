class Solution {
    public int binaryGap(int n) {
        int curr = 0, last = -1, ans = 0;
        while (n > 0) {
            if ((n & 1) == 1) {
                if (last != -1) {
                    ans = Math.max(ans, curr - last);
                }
                last = curr;
            }
            n >>= 1;
            curr++;
        }
        return ans;
    }
}