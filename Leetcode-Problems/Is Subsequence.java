class Solution {
    public boolean isSubsequence(String s, String t) {
        return rec(s, t, 0, 0);

        // int i = 0;
        // char[] arr = s.toCharArray();
        // if (s.length() == 0)
        //     return true;
        // for (char c : t.toCharArray()) {
        //     if (c == arr[i])
        //         i++;
        //     if (i == s.length())
        //         return true;
        // }
        // return false;
    }

    private boolean rec(String s, String t, int i, int j) {
        if (i == s.length())
            return true;
        if (j == t.length())
            return false;
        if (s.charAt(i) == t.charAt(j)) {
            return rec(s, t, i + 1, j + 1);
        }
        return rec(s, t, i, j + 1);
    }
}