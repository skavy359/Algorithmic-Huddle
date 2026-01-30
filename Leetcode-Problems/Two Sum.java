class Solution {
    public int[] twoSum(int[] nums, int target) {
        // int[] arr = new int[2];
        // for (int i = 0; i < nums.length; i++) {
        //     for (int j = i + 1; j < nums.length; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             arr[0] = i;
        //             arr[1] = j;
        //         }
        //     }
        // }
        // return arr;

        // HashMap<Integer, Integer> mp = new HashMap<>();
        // int[] arr = new int[2];
        // for (int i = 0; i < nums.length; i++) {
        //     mp.put(nums[i], i);
        // }
        // for (int i = 0; i < nums.length; i++) {
        //     int rem = target - nums[i];
        //     if (mp.containsKey(rem) && i != mp.get(rem)) {
        //         arr[0] = i;
        //         arr[1] = mp.get(rem);
        //         return arr;
        //     }
        // }
        // return arr;

        HashMap<Integer, Integer> mp = new HashMap<>();
        int[] arr = new int[2];
        for (int i = 0; i < nums.length; i++) {
            int rem = target - nums[i];
            if (mp.containsKey(rem) && i != mp.get(rem)) {
                arr[0] = i;
                arr[1] = mp.get(rem);
                return arr;
            }
            mp.put(nums[i], i);
        }
        return arr;
    }
}