class Solution {
    List<List<String>> ans = new ArrayList<>();

    public List<List<String>> partition(String s) {
        backtrack(0, s, new ArrayList<>());
        return ans;
    }

    void backtrack(int index, String s, List<String> temp) {
        if (index == s.length()) {
            ans.add(new ArrayList<>(temp));
            return;
        }

        for (int i = index; i < s.length(); i++) {
            String partition = s.substring(index, i + 1);

            if (palindromeCheck(partition)) {
                temp.add(partition);
                backtrack(i + 1, s, temp);
                temp.remove(temp.size() - 1);
            }
        }
    }

    boolean palindromeCheck(String t) {
        int i = 0, j = t.length() - 1;
        while (i <= j) {
            if (t.charAt(i) != t.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}