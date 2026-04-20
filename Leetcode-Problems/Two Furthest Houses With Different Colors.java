class Solution {
    public int maxDistance(int[] colors) {
        int j = colors.length - 1;
        int i = 0;
        while (j >= 0) {
            if (colors[0] != colors[j]) {
                break;
            }
            j--;
        }
        while (i < colors.length) {
            if (colors[i] != colors[colors.length - 1]) {
                break;
            }
            i++;
        }
        return Math.max(j, colors.length - 1 - i);
    }
}