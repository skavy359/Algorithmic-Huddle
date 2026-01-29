class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length())
            return false;
        // char[] arr1 = s.toCharArray();
        // char[] arr2 = t.toCharArray();
        // Arrays.sort(arr1);
        // Arrays.sort(arr2);
        // String newS = new String(arr1);
        // String newT = new String(arr2);
        // return newS.equals(newT);

        // Map<Character, Integer> mp = new HashMap<>();
        // char[] arr1 = s.toCharArray();
        // char[] arr2 = t.toCharArray();
        // for (char c : arr1) {
        //     mp.put(c, mp.getOrDefault(c, 0) + 1);
        // }
        // for (char c : arr2) {
        //     mp.put(c, mp.getOrDefault(c, 0) - 1);
        // }
        // for (int value : mp.values()) {
        //     if (value != 0) {
        //         return false;
        //     }
        // }
        // return true;

        // Map<Character, Integer> mpS = new HashMap<>();
        // Map<Character, Integer> mpT = new HashMap<>();
        // char[] arr1 = s.toCharArray();
        // char[] arr2 = t.toCharArray();
        // for (char c : arr1) {
        //     mpS.put(c, mpS.getOrDefault(c, 0) + 1);
        // }
        // for (char c : arr2) {
        //     mpT.put(c, mpT.getOrDefault(c, 0) + 1);
        // }
        // return mpS.equals(mpT);

        int[] freq = new int[26];
        char[] arr1 = s.toCharArray();
        char[] arr2 = t.toCharArray();
        for (int i = 0; i < arr1.length; i++) {
            freq[arr1[i] - 'a']++;
            freq[arr2[i] - 'a']--;
        }
        for (int i : freq) {
            if (i != 0)
                return false;
        }
        return true;
    }
}