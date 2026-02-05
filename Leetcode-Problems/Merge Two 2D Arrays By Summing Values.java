class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        for (int i = 0; i < nums1.length; i++) {
            int k = nums1[i][0], v = nums1[i][1];
            mp.put(k, mp.getOrDefault(k, 0) + v);
        }
        for (int i = 0; i < nums2.length; i++) {
            int k = nums2[i][0], v = nums2[i][1];
            mp.put(k, mp.getOrDefault(k, 0) + v);
        }
        int j = 0;
        int[][] ans = new int[mp.size()][2];
        for (Map.Entry<Integer, Integer> i : mp.entrySet()) {
            ans[j][0] = i.getKey();
            ans[j][1] = i.getValue();
            j++;
        }
        return ans;
    }
}

class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        List<int[]> ans = new ArrayList<>();
        int i = 0, j = 0;
        int m = nums1.length, n = nums2.length;
        while (i < m && j < n) {
            if (nums1[i][0] == nums2[j][0]) {
                ans.add(new int[] { nums1[i][0], nums1[i][1] + nums2[j][1] });
                i++;
                j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                ans.add(nums1[i]);
                i++;
            } else {
                ans.add(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            ans.add(nums1[i]);
            i++;
        }
        while (j < n) {
            ans.add(nums2[j]);
            j++;
        }
        return ans.toArray(new int[ans.size()][2]);
    }
}