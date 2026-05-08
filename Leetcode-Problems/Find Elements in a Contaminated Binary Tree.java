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
class FindElements {
    HashSet<Integer> st = new HashSet<>();

    public FindElements(TreeNode root) {
        root.val = 0;
        st.add(root.val);
        dfs(root);
    }

    void dfs(TreeNode root) {
        if (root == null)
            return;
        if (root.left != null) {
            root.left.val = 2 * root.val + 1;
            st.add(root.left.val);
        }
        if (root.right != null) {
            root.right.val = 2 * root.val + 2;
            st.add(root.right.val);
        }
        dfs(root.left);
        dfs(root.right);
    }

    public boolean find(int target) {
        return st.contains(target);
    }
}

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements obj = new FindElements(root);
 * boolean param_1 = obj.find(target);
 */