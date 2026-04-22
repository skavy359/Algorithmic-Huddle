class Solution {
    public List<String> twoEditWords(String[] queries, String[] dictionary) {
        List<String> ans = new ArrayList<>();
        for (int i = 0; i < queries.length; i++) {
            String s = queries[i];
            for (String d : dictionary) {
                int count = 0;
                for (int j = 0; j < queries[0].length(); j++) {
                    if (s.charAt(j) != d.charAt(j))
                        count++;
                    if (count > 2)
                        break;
                }
                if (count <= 2) {
                    ans.add(s);
                    break;
                }
            }
        }
        return ans;
    }
}