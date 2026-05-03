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
    public TreeNode reverseOddLevels(TreeNode root) {
        // Queue<TreeNode> q = new LinkedList<>();
        // if (root == null)
        //     return root;
        // q.offer(root);
        // boolean flag = false;
        // while (!q.isEmpty()) {
        //     int size = q.size();
        //     List<TreeNode> level = new ArrayList<>();

        //     for (int i = 0; i < size; i++) {
        //         TreeNode node = q.poll();
        //         level.add(node);
        //         if (node.left != null)
        //             q.offer(node.left);
        //         if (node.right != null)
        //             q.offer(node.right);
        //     }

        //     if (flag) {
        //         int start = 0, end = level.size() - 1;
        //         while (start < end) {
        //             int temp = level.get(start).val;
        //             level.get(start).val = level.get(end).val;
        //             level.get(end).val = temp;
        //             start++;
        //             end--;
        //         }
        //     }

        //     flag = !flag;
        // }

        // return root;

        dfs(root.left, root.right, 1);
        return root;
    }

    void dfs(TreeNode left, TreeNode right, int level) {
        if (left == null || right == null)
            return;
        if (level % 2 == 1) {
            int temp = left.val;
            left.val = right.val;
            right.val = temp;
        }

        dfs(left.left, right.right, level + 1);
        dfs(left.right, right.left, level + 1);
    }
}