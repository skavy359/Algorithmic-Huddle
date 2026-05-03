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
    StringBuilder ans = new StringBuilder();

    public String tree2str(TreeNode root) {
        dfs(root, ans);
        return ans.toString();
    }

    void dfs(TreeNode root, StringBuilder s) {
        if (root == null)
            return;
        s.append(String.valueOf(root.val));
        if (root.left == null && root.right == null)
            return;
        s.append('(');
        dfs(root.left, s);
        s.append(')');
        if (root.right != null) {
            s.append('(');
            dfs(root.right, s);
            s.append(')');
        }
    }
}