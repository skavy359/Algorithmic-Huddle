class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int ans = start ^ goal;
        while (ans > 0) {
            count = count + (ans & 1);
            ans >>= 1;
        }
        return count;
    }
};
