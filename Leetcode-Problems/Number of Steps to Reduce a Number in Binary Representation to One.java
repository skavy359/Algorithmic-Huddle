class Solution {
    public int numSteps(String s) {
        int ans = 0;
        StringBuilder temp = new StringBuilder(s);
        while (temp.length() > 1) {
            char back = temp.charAt(temp.length() - 1);
            if (back == '0') {
                temp.deleteCharAt(temp.length() - 1);
            } else if (back == '1') {
                int j = temp.length() - 1;
                while (j >= 0 && temp.charAt(j) != '0') {
                    temp.setCharAt(j, '0');
                    j--;
                }
                if (j < 0) {
                    temp.insert(0, '1');
                } else {
                    temp.setCharAt(j, '1');
                }
            }
            ans++;
        }
        return ans;
    }
}

class Solution {
    public int numSteps(String s) {
        int steps = 0, carry = 0;
        for (int i = s.length() - 1; i > 0; i--) {
            if ((s.charAt(i) & 1) + carry == 1) {
                steps += 2;
                carry = 1;
            } else {
                steps += 1;
            }
        }
        return steps + carry;
    }
}