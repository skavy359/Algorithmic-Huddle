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
    public int maxLevelSum(TreeNode root) {
        int sum = Integer.MIN_VALUE, currentLevel = 1, ans = 0;
        Queue<TreeNode> q = new LinkedList<>();
        if (root == null)
            return sum;
        q.offer(root);

        while (!q.isEmpty()) {
            int size = q.size();
            List<Integer> level = new ArrayList<>();

            for (int i = 0; i < size; i++) {
                TreeNode node = q.poll();
                if (node.left != null)
                    q.offer(node.left);
                if (node.right != null)
                    q.offer(node.right);
                level.add(node.val);
            }

            int temp = 0;
            for (int i : level)
                temp += i;
            if (temp > sum) {
                sum = temp;
                ans = currentLevel;
            }
            currentLevel++;
        }

        return ans;
    }
}