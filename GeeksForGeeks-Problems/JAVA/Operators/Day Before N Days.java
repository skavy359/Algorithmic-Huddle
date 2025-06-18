class Solution {
    public int dayBefore(int d, int n) {
        // code here
        if (d >= n)
            return d - n;
        else {
            int temp = n - d;
            return temp % 7 + 1;
        }
    }
}