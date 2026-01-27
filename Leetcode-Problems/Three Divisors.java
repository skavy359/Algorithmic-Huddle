class Solution {
    public boolean isThree(int n) {
        int ans = 2;
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                ans++;
        }
        return ans == 3;
    }
}