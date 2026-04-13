class Solution {
    public int trap(int[] height) {
        int l = 0, r = height.length - 1;
        int lMax = 0, rMax = 0;
        int ans = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= lMax)
                    lMax = height[l];
                else
                    ans += lMax - height[l];
                l++;
            } else {
                if (height[r] >= rMax)
                    rMax = height[r];
                else
                    ans += rMax - height[r];
                r--;
            }
        }
        return ans;

        // Stack<Integer> st = new Stack<>();
        // int ans = 0;
        // for (int i = 0; i < height.length; i++) {
        //     while (!st.isEmpty() && height[i] >= height[st.peek()]) {
        //         int bottom = height[st.pop()];
        //         if (st.isEmpty())
        //             break;
        //         ans += (Math.min(height[i], height[st.peek()]) - bottom) * (i - st.peek() - 1);
        //     }
        //     st.push(i);
        // }
        // return ans;

        // int ans = 0;
        // int[] left = new int[height.length];
        // int[] right = new int[height.length];
        // left[0] = height[0];
        // right[height.length - 1] = height[height.length - 1];
        // for (int i = 1; i < height.length; i++) {
        //     left[i] = Math.max(left[i - 1], height[i]);
        // }
        // for (int i = height.length - 2; i >= 0; i--) {
        //     right[i] = Math.max(right[i + 1], height[i]);
        // }
        // for (int i = 0; i < height.length; i++) {
        //     ans += Math.min(left[i], right[i]) - height[i];
        // }
        // return ans;
    }
}