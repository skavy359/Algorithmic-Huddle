class Solution {
    public int[] minDistinctFreqPair(int[] nums) {
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        for (int i : nums) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        int x = -1, y = -1;
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (x != -1) {
                if (entry.getValue() != mp.get(x)) {
                    y = entry.getKey();
                    return new int[] { x, y };
                }
            } else {
                x = entry.getKey();
            }
        }
        return new int[] { -1, -1 };
    }
}