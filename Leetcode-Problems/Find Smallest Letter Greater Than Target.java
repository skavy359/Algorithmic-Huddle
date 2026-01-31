class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        char ans = letters[0];
        for (char letter : letters) {
            if (letter > target) {
                ans = letter;
                return ans;
            }
        }
        return ans;
    }
}