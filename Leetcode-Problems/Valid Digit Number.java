class Solution {
    public boolean validDigit(int n, int x) {
        boolean flag1 = false;
        while (n > 9) {
            if (n % 10 == x) {
                flag1 = true;
            }
            n /= 10;
        }
        return flag1 && !(n % 10 == x);
    }
}