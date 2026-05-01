class Solution {
    List<String> ans = new ArrayList<>();

    public List<String> generateParenthesis(int n) {
        backtrack(n, 0, 0, "");
        return ans;
    }

    void backtrack(int n, int open, int close, String temp) {
        if (temp.length() == n * 2) {
            ans.add(temp);
            return;
        }

        if (open < n) {
            backtrack(n, open + 1, close, temp + '(');
        }
        if (close < open) {
            backtrack(n, open, close + 1, temp + ')');
        }
    }
}