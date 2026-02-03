class Solution {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
    }
}

class Solution {
    public int maxProductDifference(int[] nums) {
        int maxi1 = 0, maxi2 = 0, mini1 = Integer.MAX_VALUE, mini2 = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > maxi1) {
                int temp = maxi1;
                maxi1 = nums[i];
                maxi2 = temp;
            } else if (nums[i] > maxi2) {
                maxi2 = nums[i];
            }
            if (nums[i] < mini1) {
                int temp = mini1;
                mini1 = nums[i];
                mini2 = temp;
            } else if (nums[i] < mini2) {
                mini2 = nums[i];
            }
        }
        return (maxi1 * maxi2) - (mini1 * mini2);
    }
}