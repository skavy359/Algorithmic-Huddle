class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        List<List<Integer>> arr = new ArrayList<>();
        int start = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < intervals.length; i++) {
            if (intervals[i][0] <= end) {
                end = Math.max(intervals[i][1], end);
            } else {
                List<Integer> t = new ArrayList<>();
                t.add(start);
                t.add(end);
                start = intervals[i][0];
                end = intervals[i][1];
                arr.add(new ArrayList<>(t));
            }
        }
        List<Integer> t = new ArrayList<>();
        t.add(start);
        t.add(end);
        arr.add(new ArrayList<>(t));
        int[][] ans = new int[arr.size()][2];
        for (int i = 0; i < ans.length; i++) {
            ans[i][0] = arr.get(i).get(0);
            ans[i][1] = arr.get(i).get(1);
        }
        return ans;
    }
}