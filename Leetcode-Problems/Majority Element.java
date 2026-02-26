class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i : nums) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        int n = nums.length;
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (entry.getValue() > (n / 2)) {
                return entry.getKey();
            }
        }
        return -1;
    }
}

class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        return nums[nums.length / 2];
    }
}

class Solution {
    public int majorityElement(int[] nums) {
        int candidate = 0, count = 0;
        for (int i : nums) {
            if (count == 0) {
                candidate = i;
            }
            if (i == candidate) {
                count++;
            } else
                count--;
        }
        return candidate;
    }
}