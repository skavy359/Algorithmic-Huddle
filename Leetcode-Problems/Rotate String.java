class Solution {
    public boolean rotateString(String s, String goal) {
        if (s.length() != goal.length())
            return false;
        StringBuilder t = new StringBuilder(s);
        t.append(s);
        return t.toString().contains(goal);
    }
}