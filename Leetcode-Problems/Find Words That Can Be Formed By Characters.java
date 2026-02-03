class Solution {
    public int countCharacters(String[] words, String chars) {
        int arr[] = new int[26];
        for (char c : chars.toCharArray()) {
            arr[c - 'a']++;
        }
        int ans = 0;
        for (String s : words) {
            int org[] = arr.clone();
            boolean flag = true;
            for (char c : s.toCharArray()) {
                if (org[c - 'a'] == 0) {
                    flag = false;
                    break;
                }
                org[c - 'a']--;
            }
            if (flag)
                ans += s.length();
        }
        return ans;
    }
}