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
    public int minimumOperations(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        int ans = 0;
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
            List<Integer> temp = new ArrayList<>(level);
            Collections.sort(temp);
            HashMap<Integer, Integer> mp = new HashMap<>();
            for (int i = 0; i < temp.size(); i++)
                mp.put(level.get(i), i);
            for (int i = 0; i < level.size(); i++) {
                int correctValue = temp.get(i);
                if (level.get(i) == correctValue) {
                    continue;
                }
                int currentValue = level.get(i);
                int correctIndex = mp.get(correctValue);
                Collections.swap(level, i, correctIndex);
                mp.put(currentValue, correctIndex);
                mp.put(correctValue, i);
                ans++;
            }
        }

        return ans;
    }
}