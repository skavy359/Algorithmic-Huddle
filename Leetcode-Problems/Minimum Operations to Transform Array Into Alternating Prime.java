class Solution {
    public int minOperations(int[] nums) {
        boolean[] prime = new boolean[100005];
        Arrays.fill(prime, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i * i < prime.length; i++) {
            if (prime[i]) {
                for (int j = i * i; j < prime.length; j += i) {
                    prime[j] = false;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i % 2 == 0) {
                if (prime[nums[i]])
                    continue;
                else {
                    while (true) {
                        nums[i]++;
                        ans++;
                        if (prime[nums[i]])
                            break;
                    }
                }
            } else {
                if (!prime[nums[i]])
                    continue;
                else {

                    while (true) {
                        nums[i]++;
                        ans++;
                        if (!prime[nums[i]])
                            break;
                    }
                }
            }
        }
        return ans;
    }
}