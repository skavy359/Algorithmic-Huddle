class Solution {
    public int minimumDistance(int[] nums) {
        HashMap<Integer, List<Integer>> mp = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            mp.computeIfAbsent(nums[i], t -> new ArrayList<>()).add(i);
        }
        int ans = -1;
        for (Map.Entry<Integer, List<Integer>> entry : mp.entrySet()) {
            List<Integer> temp = entry.getValue();
            if (temp.size() < 3)
                continue;
            for (int i = 0; i < temp.size() - 2; i++) {
                int dist = Math.abs(temp.get(i + 2) - temp.get(i + 1)) + Math.abs(temp.get(i + 1) - temp.get(i))
                        + Math.abs(temp.get(i) - temp.get(i + 2));
                if (ans == -1)
                    ans = dist;
                ans = Math.min(ans, dist);
            }
        }
        return ans;
    }
}