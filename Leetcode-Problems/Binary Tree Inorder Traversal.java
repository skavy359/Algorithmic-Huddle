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
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        InorderTraverse(root, ans);
        return ans;
    }

    public void InorderTraverse(TreeNode root, List<Integer> ans) {
        if (root == null)
            return;
        InorderTraverse(root.left, ans);
        ans.add(root.val);
        InorderTraverse(root.right, ans);
    }

}