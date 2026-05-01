/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    TreeNode ans = null;

    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        search(cloned, target);
        return ans;
    }

    public void search(TreeNode cloned, TreeNode target) {
        if (cloned == null)
            return;
        if (cloned.val == target.val) {
            ans = cloned;
            return;
        }
        search(cloned.left, target);
        search(cloned.right, target);
    }
}