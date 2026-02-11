class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer> st = new Stack<>();
        for (String s : operations) {
            if (s.equals("C")) {
                st.pop();
            } else if (s.equals("D")) {
                int t = st.peek();
                st.push(t * 2);
            } else if (s.equals("+")) {
                int a = st.peek();
                st.pop();
                int b = st.peek();
                st.push(a);
                st.push(a + b);
            } else {
                int a = Integer.parseInt(s);
                st.push(a);
            }
        }
        int ans = 0;
        while (!st.isEmpty())
            ans += st.pop();
        return ans;
    }
}