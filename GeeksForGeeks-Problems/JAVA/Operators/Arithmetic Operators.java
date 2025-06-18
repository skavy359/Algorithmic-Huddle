class Solution {
    public int[] computeOperations(int x, int y) {
        int p = x + y;
        int q = x - y;
        int r = x * y;
        int s = x / y;
        int t = x % y;
        int arr[] = { p, q, r, s, t };
        return arr;
    }
}
