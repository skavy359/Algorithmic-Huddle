class Solution {
    public int findComplement(int n) {
        int ans = 0, i = 0;
        while (n > 0) {
            int bit = n & 1;
            if (bit == 1)
                bit = 0;
            else
                bit = 1;
            ans |= (bit << i);
            n = n >> 1;
            i++;
        }
        return ans;
    }
}