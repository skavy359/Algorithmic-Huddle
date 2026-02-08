class Solution {
    public List<Long> mergeAdjacent(int[] nums) {
        Stack<Long> st = new Stack<>();
        for (int i : nums) {
            long temp = i;
            while (!st.isEmpty() && st.peek() == temp) {
                st.pop();
                temp += temp;
            }
            st.push(temp);
        }
        List<Long> ans = new ArrayList<>();
        while (!st.isEmpty()) {
            ans.add(st.peek());
            st.pop();
        }
        Collections.reverse(ans);
        return ans;
    }
}