class Solution {
    public int minCost(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i : nums1) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        for (int i : nums2) {
            mp.put(i, mp.getOrDefault(i, 0) - 1);
        }
        int ans = 0;
        for (int value : mp.values()) {
            if (value % 2 != 0)
                return -1;
            ans += Math.abs(value) / 2;
        }
        return ans / 2;
    }
}