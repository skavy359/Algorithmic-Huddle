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
    long mini = Long.MAX_VALUE;
    long secondMini = Long.MAX_VALUE;

    public int findSecondMinimumValue(TreeNode root) {
        mini = root.val;
        dfs(root);
        return secondMini == Long.MAX_VALUE ? -1 : (int) secondMini;
    }

    public void dfs(TreeNode root) {
        if (root == null) {
            return;
        }
        dfs(root.left);

        if (root.val < mini) {
            secondMini = mini;
            mini = root.val;
        } else if (root.val < secondMini && root.val != mini) {
            secondMini = root.val;
        }

        dfs(root.right);
    }
}