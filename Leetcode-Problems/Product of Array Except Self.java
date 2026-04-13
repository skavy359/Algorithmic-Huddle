class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans = new int[nums.length];
        ans[0] = 1;
        for (int i = 1; i < nums.length; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int suff = 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            ans[i] = ans[i] * suff;
            suff *= nums[i];
        }
        return ans;

        // int[] pref = new int[nums.length];
        // int[] suff = new int[nums.length];
        // pref[0] = 1;
        // suff[suff.length - 1] = 1;
        // int[] ans = new int[nums.length];
        // for (int i = 1; i < nums.length; i++) {
        //     pref[i] = pref[i - 1] * nums[i - 1];
        // }
        // for (int i = nums.length - 2; i >= 0; i--) {
        //     suff[i] = suff[i + 1] * nums[i + 1];
        // }
        // for (int i = 0; i < nums.length; i++) {
        //     ans[i] = pref[i] * suff[i];
        // }
        // return ans;

        // int prod = 1;
        // for (int i : nums)
        //     prod *= i;
        // int[] ans = new int[nums.length];
        // for (int i = 0; i < nums.length; i++) {
        //     ans[i] = prod / nums[i];
        // }
        // return ans;

        // int[] prod = new int[nums.length];
        // Arrays.fill(prod, 1);
        // for (int i = 0; i < nums.length; i++) {
        //     for (int j = 0; j < nums.length; j++) {
        //         if (i != j)
        //             prod[i] *= nums[j];
        //     }
        // }
        // return prod;
    }
}