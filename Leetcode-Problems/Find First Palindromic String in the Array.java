class Solution {
    public String firstPalindrome(String[] words) {
        for (String s : words) {
            if (checkPalindrome(s)) {
                return s;
            }
        }
        return "";
    }

    private boolean checkPalindrome(String s) {
        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (s.charAt(i) != s.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
}