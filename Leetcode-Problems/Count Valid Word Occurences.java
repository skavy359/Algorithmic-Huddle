public class Solution {
    public int[] countWordOccurrences(String[] chunks, String[] queries) {
        StringBuilder sb = new StringBuilder();
        for (String chunk : chunks) {
            sb.append(chunk);
        }
        String s = sb.toString();
        s = s.replaceAll("--+", " ");
        String[] tokens = s.split("\\s+");

        HashMap<String, Integer> map = new HashMap<>();
        for (String token : tokens) {
            token = token.replaceAll("^-|-$", "");
            if (token.length() == 0)
                continue;
            map.put(token, map.getOrDefault(token, 0) + 1);
        }

        int[] ans = new int[queries.length];
        for (int i = 0; i < queries.length; i++) {
            ans[i] = map.getOrDefault(queries[i], 0);
        }
        return ans;
    }
} {
    
}
