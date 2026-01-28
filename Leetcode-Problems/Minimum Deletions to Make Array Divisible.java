class Solution {
    public int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public int minOperations(int[] nums, int[] numsDivide) {
        int res = numsDivide[0];
        for (int i : numsDivide) {
            res = gcd(res, i);
        }
        int count = 0;
        boolean flag = false;
        Arrays.sort(nums);
        for (int i : nums) {
            if (res % i != 0) {
                count++;
            } else {
                flag = true;
                break;
            }
        }
        return flag ? count : -1;
    }
}