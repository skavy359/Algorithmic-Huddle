class Solution {
    public int prefixConnected(String[] words, int k) {
        HashMap<String, Integer> mp = new HashMap<>();
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() < k)
                continue;
            String temp = words[i].substring(0, k);
            mp.put(temp, mp.getOrDefault(temp, 0) + 1);
        }
        int ans = 0;
        for (Map.Entry<String, Integer> entry : mp.entrySet()) {
            if (entry.getValue() != 1) {
                ans++;
            }
        }
        return ans;
    }
}