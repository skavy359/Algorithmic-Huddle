class Solution {
    public int minimumIndex(int[] capacity, int itemSize) {
        int ans = -1, mini = Integer.MAX_VALUE;
        for (int i = 0; i < capacity.length; i++) {
            if (capacity[i] >= itemSize) {
                if (capacity[i] < mini) {
                    mini = capacity[i];
                    ans = i;
                }
            }
        }
        return ans;
    }
}