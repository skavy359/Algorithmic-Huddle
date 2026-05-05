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
    public boolean isEvenOddTree(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        int level = -1;

        while (!q.isEmpty()) {
            int size = q.size();
            level++;
            List<Integer> list = new ArrayList<>();

            for (int i = 0; i < size; i++) {
                TreeNode node = q.poll();
                if (node.left != null)
                    q.offer(node.left);
                if (node.right != null)
                    q.offer(node.right);
                list.add(node.val);
            }

            if (level % 2 == 0) {
                for (int i = 1; i < list.size(); i++) {
                    if (list.get(i) % 2 != 1 || list.get(i - 1) % 2 != 1 || list.get(i) <= list.get(i - 1))
                        return false;
                }
                if (list.get(0) % 2 != 1)
                    return false;
            } else {
                for (int i = 1; i < list.size(); i++) {
                    if (list.get(i) % 2 != 0 || list.get(i - 1) % 2 != 0 || list.get(i) >= list.get(i - 1))
                        return false;
                }
                if (list.get(0) % 2 != 0)
                    return false;
            }
        }
        return true;
    }
}