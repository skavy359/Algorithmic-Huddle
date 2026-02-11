class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> st = new Stack<>();
        for (int i : asteroids) {
            while (!st.isEmpty() && i < 0 && st.peek() > 0) {
                int diff = i + st.peek();
                if (diff < 0) {
                    st.pop();
                } else if (diff > 0) {
                    i = 0;
                } else {
                    i = 0;
                    st.pop();
                }
            }
            if (i != 0)
                st.push(i);
        }
        int[] arr = new int[st.size()];
        int i = st.size() - 1;
        while (!st.isEmpty())
            arr[i--] = st.pop();
        return arr;
    }
}