class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> mpS = new HashMap<>();
        HashMap<Character, Character> mpT = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if ((mpS.containsKey(s.charAt(i)) && mpS.get(s.charAt(i)) != t.charAt(i))
                    || (mpT.containsKey(t.charAt(i)) && mpT.get(t.charAt(i)) != s.charAt(i))) {
                return false;
            }
            mpS.put(s.charAt(i), t.charAt(i));
            mpT.put(t.charAt(i), s.charAt(i));
        }
        return true;
    }
}