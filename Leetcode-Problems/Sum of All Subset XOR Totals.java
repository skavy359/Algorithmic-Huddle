class Solution {
    int ans = 0;

    public int subsetXORSum(int[] nums) {
        backtrack(0, nums, 0);
        return ans;
    }

    void backtrack(int index, int[] nums, int xor) {
        if (index == nums.length) {
            ans += xor;
            return;
        }
        backtrack(index + 1, nums, xor ^ nums[index]);
        backtrack(index + 1, nums, xor);
    }
}