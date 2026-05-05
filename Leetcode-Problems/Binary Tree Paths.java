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
    List<String> ans = new ArrayList<>();

    public List<String> binaryTreePaths(TreeNode root) {
        dfs(root, "");
        return ans;
    }

    void dfs(TreeNode root, String temp) {
        if (root == null)
            return;
        temp += String.valueOf(root.val);
        if (root.left == null && root.right == null) {
            ans.add(temp);
        } else {
            temp += "->";
        }
        dfs(root.left, temp);
        dfs(root.right, temp);
    }
}