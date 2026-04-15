class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {
        int ans = words.length;
        int n = words.length;
        for (int i = 0; i < n; i++) {
            if (words[i].equals(target)) {
                int mini = Math.min(Math.abs(startIndex - i), n - Math.abs(startIndex - i));
                ans = Math.min(ans, mini);
            }
        }
        return ans < n ? ans : -1;
    }
}