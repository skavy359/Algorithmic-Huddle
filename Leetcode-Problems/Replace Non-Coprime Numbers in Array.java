class Solution {
    public int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public long lcm(long a, long b) {
        return (a / gcd((int) a, (int) b)) * b;
    }

    public List<Integer> replaceNonCoprimes(int[] nums) {
        Stack<Long> st = new Stack<>();
        for (int i : nums) {
            long temp = i;
            while (!st.isEmpty()) {
                long top = st.peek();
                long gc = gcd((int) top, (int) temp);
                if (gc == 1)
                    break;
                temp = lcm(temp, top);
                st.pop();
            }
            st.push(temp);
        }
        List<Integer> ans = new ArrayList<Integer>();
        for (long v : st)
            ans.add((int) v);
        return ans;
    }
}