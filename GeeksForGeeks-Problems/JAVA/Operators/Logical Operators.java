class Solution {
    public String booleanOperations(boolean a, boolean b) {
        // Code here
        String ans = "";
        Boolean temp1 = (a && b);
        Boolean temp2 = (a || b);
        Boolean temp3 = (!a);
        ans += temp1;
        ans += " ";
        ans += temp2;
        ans += " ";
        ans += temp3;
        return ans;
    }
}