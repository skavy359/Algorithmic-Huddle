class Solution {
    List<List<Integer>> ans = new ArrayList<>();

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        backtrack(0, candidates, target, new ArrayList<>());
        return ans;
    }

    void backtrack(int index, int[] arr, int target, List<Integer> temp) {
        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        if (target < 0)
            return;
        for (int i = index; i < arr.length; i++) {
            temp.add(arr[i]);
            backtrack(i, arr, target - arr[i], temp);
            temp.remove(temp.size() - 1);
        }
    }
}