class Solution {
    public int scoreDifference(int[] nums) {
        int fir = 0, sec = 0;
        boolean playerOne = true;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 != 0) {
                playerOne = !playerOne;
            }
            if (i % 6 == 5) {
                playerOne = !playerOne;
            }
            if (playerOne)
                fir += nums[i];
            else
                sec += nums[i];
        }
        return fir - sec;
    }
}