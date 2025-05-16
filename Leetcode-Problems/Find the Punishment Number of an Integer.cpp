class Solution {
    public:
        bool partition(int x, int i) {
            if (x == i) {
                return 1;
            }
            if (x == 0) {
                return i;
            }
            const int z = min(x, 1000);
            for (int m = 10; m <= z; m *= 10) {
                if (partition(x / m, i - x % m))
                    return 1;
            }
            return 0;
        }
    
        int punishmentNumber(int n) {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                if (i % 9 != 0 && i % 9 != 1) {
                    continue;
                }
                const int x = i * i;
                sum += (partition(x, i)) ? x : 0;
            }
            return sum;
        }
    };