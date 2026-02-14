class Solution {
    public String convertToTitle(int columnNumber) {
        StringBuilder ans = new StringBuilder();
        while (columnNumber > 0) {
            int rem = (columnNumber - 1) % 26;
            ans.append((char) (rem + 'A'));
            columnNumber = (columnNumber - 1) / 26;
        }

        return ans.reverse().toString();
    }
}