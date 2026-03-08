class Solution {
    public int minOperations(String s) {
        char[] temp2 = s.toCharArray();
        Arrays.sort(temp2);
        String temp = new String(temp2);
        if (temp.equals(s))
            return 0;
        if (s.length() == 2)
            return -1;
        int maxi = -1, mini = 1000;
        for (char c : s.toCharArray()) {
            maxi = Math.max(maxi, (int) c);
            mini = Math.min(mini, (int) c);
        }
        if ((int) s.charAt(0) == maxi && (int) s.charAt(s.length() - 1) == mini) {
            for (int i = 1; i < s.length() - 1; i++) {
                if ((int) s.charAt(i) == mini || (int) s.charAt(i) == maxi)
                    return 2;
            }
            return 3;
        }
        if ((int) s.charAt(0) == mini || (int) s.charAt(s.length() - 1) == maxi)
            return 1;
        if ((int) s.charAt(0) == maxi)
            return 2;
        if ((int) s.charAt(s.length() - 1) == mini)
            return 2;
        return 2;
    }
}