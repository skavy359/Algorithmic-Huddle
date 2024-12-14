class Solution {
public:
    int minSteps(int n) {
        if (n == 1)
            return 0;
        int count = 0;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                count += i;
                n /= i;
            }
        }
        if (n > 1) {
            count += n;
        }
        return count;
    }
};
