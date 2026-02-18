class Solution {
    public boolean hasAlternatingBits(int n) {
        int flag = n & 1;
        n >>= 1;
        while (n > 0) {
            int bit = n & 1;
            if (bit == flag) {
                return false;
            } else {
                flag = (flag == 1) ? 0 : 1;
            }
            n >>= 1;
        }
        return true;
    }
}