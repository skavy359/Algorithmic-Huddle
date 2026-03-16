class Solution {
    public List<Integer> majorityElement(int[] nums) {
        // HashMap<Integer, Integer> mp = new HashMap<>();
        // for (int i : nums) {
        //     mp.put(i, mp.getOrDefault(i, 0) + 1);
        // }
        // List<Integer> ans = new ArrayList<>();
        // for (Map.Entry<Integer, Integer> entry : mp.entrySet())
        //     if (entry.getValue() > nums.length / 3)
        //         ans.add(entry.getKey());
        // return ans;

        // Arrays.sort(nums);
        // List<Integer> ans = new ArrayList<>();
        // int count = 1;
        // for (int i = 1; i < nums.length; i++) {
        //     if (nums[i] == nums[i - 1])
        //         count++;
        //     else {
        //         if (count > nums.length / 3)
        //             ans.add(nums[i - 1]);
        //         count = 1;
        //     }
        // }
        // if (count > nums.length / 3) {
        //     ans.add(nums[nums.length - 1]);
        // }
        // return ans;

        int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
        for (int i : nums) {
            if (candidate1 == i)
                count1++;
            else if (candidate2 == i)
                count2++;
            else if (count1 == 0) {
                candidate1 = i;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = i;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i : nums) {
            if (i == candidate1)
                count1++;
            else if (i == candidate2)
                count2++;
        }
        List<Integer> ans = new ArrayList<>();
        if (count1 > nums.length / 3)
            ans.add(candidate1);
        if (count2 > nums.length / 3)
            ans.add(candidate2);
        return ans;
    }
}