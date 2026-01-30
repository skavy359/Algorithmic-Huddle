class Solution {
    public int maxDifference(String s) {
        // HashMap<Character, Integer> mp = new HashMap<>();
        // int odd = Integer.MIN_VALUE, even = Integer.MAX_VALUE;
        // for (char c : s.toCharArray()) {
        //     mp.put(c, mp.getOrDefault(c, 0) + 1);
        // }
        // for (int value : mp.values()) {
        //     if (value % 2 == 0) {
        //         even = Math.min(even, value);
        //     } else {
        //         odd = Math.max(odd, value);
        //     }
        // }
        // return odd - even;

        int[] arr = new int[26];
        int odd = Integer.MIN_VALUE, even = Integer.MAX_VALUE;
        for (char c : s.toCharArray()) {
            arr[c - 'a']++;
        }
        for (int i : arr) {
            if (i % 2 == 0 && i != 0) {
                even = Math.min(even, i);
            } else {
                odd = Math.max(odd, i);
            }
        }
        return odd - even;
    }
}