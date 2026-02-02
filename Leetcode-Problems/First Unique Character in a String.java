class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character, Integer> st = new HashMap<>();
        for (char c : s.toCharArray()) {
            st.put(c, st.getOrDefault(c, 0) + 1);
        }
        for (int i = 0; i < s.length(); i++) {
            if (st.get(s.charAt(i)) == 1) {
                return i;
            }
        }
        return -1;
    }
}

class Solution {
    public int firstUniqChar(String s) {
        int n = s.length();
        HashMap<Character, Integer> st = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (!st.containsKey(s.charAt(i))) {
                st.put(s.charAt(i), i);
            } else {
                st.put(s.charAt(i), n);
            }
        }
        int ans = n;
        for (int i : st.values()) {
            ans = Math.min(ans, i);
        }
        return ans == n ? -1 : ans;
    }
}

class Solution {
    public int firstUniqChar(String s) {
        int[] arr = new int[26];
        for (int i = 0; i < s.length(); i++) {
            arr[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (arr[s.charAt(i)-'a'] == 1)
                return i;
        }
        return -1;
    }
}