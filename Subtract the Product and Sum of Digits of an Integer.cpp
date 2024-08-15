class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int rem = 0;
        while (n > 0) {
            rem = n % 10;
            sum = sum + rem;
            product = product * rem;
            n = n / 10;
        }
        return product - sum;
    }
};
