// User function Template for Java

class Solution {
    static long modMultiply(long a, long b) {
        // add your code here
        long ans = ((a % 1000000007) * (b % 1000000007)) % 1000000007;
        return ans;
    }
}
