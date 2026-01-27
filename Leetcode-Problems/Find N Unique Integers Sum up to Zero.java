class Solution {
    public int[] sumZero(int n) {
        int[] arr = new int[n];
        int i = 0;
        int temp = n / 2;
        while (temp > 0) {
            arr[i++] = -temp;
            arr[i++] = temp;
            temp--;
        }
        if (n % 2 != 0) {
            arr[i] = 0;
        }
        return arr;
    }
}