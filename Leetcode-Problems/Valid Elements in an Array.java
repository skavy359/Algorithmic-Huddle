class Solution {
    public List<Integer> findValidElements(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        int[] pref = new int[nums.length];
        int[] suff = new int[nums.length];
        pref[0] = nums[0];
        suff[nums.length - 1] = nums[nums.length - 1];
        for (int i = 1; i < nums.length; i++) {
            pref[i] = Math.max(pref[i - 1], nums[i - 1]);
        }
        for (int i = nums.length - 2; i >= 0; i--) {
            suff[i] = Math.max(suff[i + 1], nums[i + 1]);
        }
        ans.add(nums[0]);
        for (int i = 1; i < nums.length - 1; i++) {
            if (nums[i] > pref[i] || nums[i] > suff[i]) {
                ans.add(nums[i]);
            }
        }
        if (nums.length != 1)
            ans.add(nums[nums.length - 1]);
        return ans;
    }
}