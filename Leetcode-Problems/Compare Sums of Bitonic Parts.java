class Solution {
    public int compareBitonicSums(int[] nums) {
        long asc = nums[0], desc = nums[nums.length - 1];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > nums[i - 1])
                asc += nums[i];
            else if (nums[i] < nums[i - 1])
                desc += nums[i - 1];
        }
        return asc > desc ? 0 : asc < desc ? 1 : -1;
    }
}