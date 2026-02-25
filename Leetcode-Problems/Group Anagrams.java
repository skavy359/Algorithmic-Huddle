class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> mp = new HashMap<>();
        for (String s : strs) {
            char[] arr = s.toCharArray();
            Arrays.sort(arr);
            String t = new String(arr);
            mp.computeIfAbsent(t, k -> new ArrayList<>()).add(s);
        }
        return new ArrayList<>(mp.values());
    }
}

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> mp = new HashMap<>();
        for (String s : strs) {
            int[] arr = new int[26];
            for (char c : s.toCharArray()) {
                arr[c - 'a']++;
            }
            String temp = Arrays.toString(arr);
            mp.computeIfAbsent(temp, k -> new ArrayList<>()).add(s);
        }
        return new ArrayList<>(mp.values());
    }
}