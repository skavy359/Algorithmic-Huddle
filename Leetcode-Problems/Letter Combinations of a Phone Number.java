class Solution {
    List<String> ans = new ArrayList<>();
    String[] mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0)
            return ans;
        backtrack(0, digits, "");
        return ans;
    }

    void backtrack(int index, String digits, String temp) {
        if (index == digits.length()) {
            ans.add(temp);
            return;
        }
        String letters = mp[digits.charAt(index) - '0'];
        for (int i = 0; i < letters.length(); i++) {
            backtrack(index + 1, digits, temp + letters.charAt(i));
        }
    }
}