class Solution {
    public boolean divideArray(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i : nums) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        for (int i : mp.values()) {
            if (i % 2 != 0)
                return false;
        }
        return true;
    }
}