class Solution {
    List<List<Integer>> ans = new ArrayList<>();

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        backtrack(0, candidates, target, new ArrayList<>());
        return ans;
    }

    void backtrack(int index, int[] nums, int target, List<Integer> temp) {
        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        if (target < 0)
            return;
        for (int i = index; i < nums.length; i++) {
            if (i > index && nums[i] == nums[i - 1])
                continue;
            temp.add(nums[i]);
            backtrack(i + 1, nums, target - nums[i], temp);
            temp.remove(temp.size() - 1);
        }
    }
}