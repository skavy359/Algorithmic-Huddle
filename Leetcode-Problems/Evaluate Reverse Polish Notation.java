class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();
        for (String s : tokens) {
            if (st.size() > 1 && s.equals("+")) {
                int a = st.pop();
                int b = st.pop();
                st.push(a + b);
            } else if (st.size() > 1 && s.equals("-")) {
                int a = st.pop();
                int b = st.pop();
                st.push(b - a);
            } else if (st.size() > 1 && s.equals("*")) {
                int a = st.pop();
                int b = st.pop();
                st.push(a * b);
            } else if (st.size() > 1 && s.equals("/")) {
                int a = st.pop();
                int b = st.pop();
                st.push(b / a);
            } else {
                st.push(Integer.parseInt(s));
            }
        }
        return st.peek();
    }
}