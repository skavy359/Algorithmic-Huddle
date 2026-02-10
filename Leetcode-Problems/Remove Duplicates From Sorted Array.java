class Solution {
    public int removeDuplicates(int[] nums) {
        TreeSet<Integer> st = new TreeSet<>();
        for (int i : nums)
            st.add(i);
        int j = 0;
        for (int i : st) {
            nums[j] = i;
            j++;
        }
        return j;
    }
}

class Solution {
    public int removeDuplicates(int[] nums) {
        int slow = 0, fast = 1;
        while (fast < nums.length) {
            if (nums[slow] != nums[fast]) {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }
        return slow + 1;
    }
}