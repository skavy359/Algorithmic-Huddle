class Solution {
    public boolean checkOnesSegment(String s) {
        int count = 0, temp = 0;
        if (s.equals("1"))
            return true;
        for (char c : s.toCharArray()) {
            if (c == '1') {
                temp++;
            } else {
                if (temp != 0)
                    count++;
                temp = 0;
            }
            if (count > 1)
                return false;
        }
        if (count == 1 && temp != 0)
            return false;
        return true;
    }
}