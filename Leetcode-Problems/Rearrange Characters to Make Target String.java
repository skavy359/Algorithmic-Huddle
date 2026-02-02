class Solution {
    public int rearrangeCharacters(String s, String target) {
        int arrS[] = new int[26];
        int arrT[] = new int[26];
        for (char c : s.toCharArray()) {
            arrS[c - 'a']++;
        }
        for (char c : target.toCharArray()) {
            arrT[c - 'a']++;
        }
        int ans = Integer.MAX_VALUE;
        for (int i=0;i<26;i++) {
            if (arrT[i] != 0)
                ans = Math.min(ans, arrS[i] / arrT[i]);
        }
        return ans;
    }
}