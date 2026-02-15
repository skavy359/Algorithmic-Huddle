class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        StringBuilder ans = new StringBuilder();
        for (String s : words) {
            int sum = 0;
            for (char c : s.toCharArray()) {
                sum += weights[c - 'a'];
            }
            int res = 25 - (sum % 26);
            ans.append((char) (res + 'a'));
        }
        return ans.toString();
    }
}