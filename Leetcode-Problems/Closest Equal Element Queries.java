class Solution {
    public List<Integer> solveQueries(int[] nums, int[] queries) {
        HashMap<Integer, List<Integer>> mp = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            mp.computeIfAbsent(nums[i], t -> new ArrayList<>()).add(i);
        }

        List<Integer> ans = new ArrayList<>();
        int len = nums.length;

        for (int i = 0; i < queries.length; i++) {
            int idx = queries[i];
            int ele = nums[idx];
            List<Integer> temp = mp.get(ele);
            int n = temp.size();

            if (n <= 1) {
                ans.add(-1);
            } else {
                int pos = binarySearch(temp, idx);

                int prevIndex = temp.get((pos - 1 + n) % n);
                int nextIndex = temp.get((pos + 1) % n);

                int prevDist = Math.min(Math.abs(idx - prevIndex), len - Math.abs(idx - prevIndex));
                int nextDist = Math.min(Math.abs(idx - nextIndex), len - Math.abs(idx - nextIndex));

                ans.add(Math.min(prevDist, nextDist));
            }
        }
        return ans;
    }

    private int binarySearch(List<Integer> list, int target) {
        int l = 0, r = list.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int midVal = list.get(mid);

            if (midVal == target) return mid;
            else if (midVal < target) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
}