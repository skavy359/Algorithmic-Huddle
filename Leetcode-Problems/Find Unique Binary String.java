class Solution {
    public String findDifferentBinaryString(String[] nums) {
        String ans = "";
        for (int i = 0; i < nums.length; i++) {
            char ch = nums[i].charAt(i);
            ans += ch == '1' ? '0' : '1';
        }
        return ans;
    }
}