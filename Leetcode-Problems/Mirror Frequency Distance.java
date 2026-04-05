class Solution {
    public int mirrorFrequency(String s) {
        int[] C = new int[26];
        int[] D = new int[10];
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                C[c - 'a']++;
            } else {
                D[c - '0']++;
            }
        }
        int ans = 0;
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                char m = (char) ('a' + 'z' - c);
                int freqC = C[c - 'a'];
                int freqM = C[m - 'a'];
                C[c - 'a'] = 0;
                C[m - 'a'] = 0;
                ans += Math.abs(freqC - freqM);
            } else {
                char m = (char) ('0' + '9' - c);
                int freqC = D[c - '0'];
                int freqM = D[m - '0'];
                D[c - '0'] = 0;
                D[m - '0'] = 0;
                ans += Math.abs(freqC - freqM);
            }
        }
        return ans;
    }
}