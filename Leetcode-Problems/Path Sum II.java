/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<List<Integer>> ans = new ArrayList<>();

    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        dfs(root, targetSum, 0, new ArrayList<>());
        return ans;
    }

    void dfs(TreeNode root, int target, int sum, List<Integer> temp) {
        if (root == null)
            return;
        sum += root.val;
        temp.add(root.val);
        if (root.left == null && root.right == null && sum == target) {
            ans.add(new ArrayList<>(temp));
        }
        dfs(root.left, target, sum, temp);
        dfs(root.right, target, sum, temp);
        temp.remove(temp.size() - 1);
    }
}