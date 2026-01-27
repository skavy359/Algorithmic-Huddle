class Solution {

    public int digitsInFactorial(int n) {
        // code here
        double count = 0;
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        for (int i = 2; i <= n; i++) {
            count += Math.log10(i);
        }
        return (int) Math.floor(count) + 1;
    }
}
