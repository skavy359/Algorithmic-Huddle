class Solution {
    public int sumOfPrimesInRange(int n) {
        boolean[] arr = new boolean[1001];
        Arrays.fill(arr, true);
        arr[0] = false;
        arr[1] = false;
        for (int i = 2; i * i < 1001; i++) {
            if (arr[i]) {
                for (int j = i * i; j < 1001; j += i) {
                    arr[j] = false;
                }
            }
        }

        int sum = 0;
        int original = n;
        int reverse = 0;
        while (n > 0) {
            reverse = (reverse * 10) + (n % 10);
            n /= 10;
        }

        for (int i = Math.min(original, reverse); i <= Math.max(original, reverse); i++) {
            if (arr[i]) {
                sum += i;
            }
        }
        return sum;
    }
}