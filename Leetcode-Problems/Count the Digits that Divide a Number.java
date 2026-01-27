class Solution {
    public int countDigits(int num) {
        int ans = 0;
        int temp = num;
        while (temp > 0) {
            int rem = temp % 10;
            if (num % rem == 0)
                ans++;
            temp /= 10;
        }
        return ans;
    }
}