class Solution {
    public String longestCommonPrefix(String[] strs) {
        String pref = strs[0];
        for (int i = 1; i < strs.length; i++) {
            int j = 0;
            while (j < Math.min(pref.length(), strs[i].length())) {
                if (pref.charAt(j) != strs[i].charAt(j)) {
                    break;
                }
                j++;
            }
            pref = pref.substring(0, j);
        }
        return pref;
    }
}

class Solution {
    public String longestCommonPrefix(String[] strs) {
        for (int i = 0; i < strs[0].length(); i++) {
            for (String s : strs) {
                if (i == s.length() || s.charAt(i) != strs[0].charAt(i)) {
                    return strs[0].substring(0, i);
                }
            }
        }
        return strs[0];
    }
}

class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        int i = 0, n = strs.length - 1;
        while (i < strs[0].length() && i < strs[n].length() && strs[0].charAt(i) == strs[n].charAt(i)) {
            i++;
        }
        return strs[0].substring(0, i);
    }
}