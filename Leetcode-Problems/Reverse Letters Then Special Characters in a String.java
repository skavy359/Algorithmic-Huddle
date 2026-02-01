class Solution {
    public String reverseByType(String s) {
        StringBuilder letters = new StringBuilder();
        StringBuilder characters = new StringBuilder();
        char[] newS = s.toCharArray();
        StringBuilder ans = new StringBuilder();
        for (int i = newS.length - 1; i >= 0; i--) {
            if (newS[i] >= 'a' && newS[i] <= 'z') {
                letters.append(newS[i]);
            } else {
                characters.append(newS[i]);
            }
        }
        int j = 0, k = 0;
        for (int i = 0; i < newS.length; i++) {
            if (newS[i] >= 'a' && newS[i] <= 'z') {
                ans.append(letters.charAt(j++));
            } else {
                ans.append(characters.charAt(k++));
            }
        }
        return ans.toString();
    }
}