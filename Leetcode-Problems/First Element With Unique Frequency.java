class Solution {
    public int firstUniqueFreq(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i : nums) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        HashMap<Integer, Integer> mpCount = new HashMap<>();
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            mpCount.put(entry.getValue(), mpCount.getOrDefault(entry.getValue(), 0) + 1);
        }
        for (int i : nums) {
            if (mpCount.get(mp.get(i)) == 1)
                return i;
        }
        return -1;
    }
}