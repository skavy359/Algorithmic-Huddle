class Solution {
    public int maxArea(int[] height) {
        int ans = 0;
        for (int i = 0; i < height.length; i++) {
            for (int j = i + 1; j < height.length; j++) {
                int area = Math.min(height[i], height[j]) * (j - i);
                ans = Math.max(area, ans);
            }
        }
        return ans;
    }
}

class Solution {
    public int maxArea(int[] height) {
        int l = 0, r = height.length - 1;
        int ans = 0;
        while (l < r) {
            int area = Math.min(height[l], height[r]) * (r - l);
            ans = Math.max(ans, area);
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
}