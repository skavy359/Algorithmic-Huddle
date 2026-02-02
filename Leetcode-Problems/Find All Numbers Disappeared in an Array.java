class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashSet<Integer> st = new HashSet<>();
        List<Integer> ans = new ArrayList<>();
        for (int i : nums)
            st.add(i);
        for (int i = 1; i <= nums.length; i++) {
            if (!st.contains(i)) {
                ans.add(i);
            }
        }
        return ans;
    }
}

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        boolean[] arr = new boolean[nums.length];
        Arrays.fill(arr, false);
        for (int i : nums) {
            arr[i - 1] = true;
        }
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (arr[i] == false) {
                ans.add(i + 1);
            }
        }
        return ans;
    }
}

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        for (int num : nums) {
            int i = Math.abs(num) - 1;
            nums[i] = -Math.abs(nums[i]);
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) {
                ans.add(i + 1);
            }
        }
        return ans;
    }
}