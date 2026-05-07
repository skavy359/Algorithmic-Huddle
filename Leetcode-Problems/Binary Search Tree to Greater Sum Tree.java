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
    List<Integer> arr = new ArrayList<>();
    HashMap<Integer, Integer> mp = new HashMap<>();

    public TreeNode bstToGst(TreeNode root) {
        inorderTraversal(root);
        int pref[] = new int[arr.size()];
        pref[pref.length - 1] = arr.get(arr.size() - 1);
        for (int i = arr.size() - 2; i >= 0; i--) {
            pref[i] = pref[i + 1] + arr.get(i);
        }
        for (int i = 0; i < arr.size(); i++)
            mp.put(arr.get(i), pref[i]);
        updateTree(root);
        return root;
    }

    public void inorderTraversal(TreeNode root) {
        if (root == null)
            return;
        inorderTraversal(root.left);
        arr.add(root.val);
        inorderTraversal(root.right);
    }

    public void updateTree(TreeNode root) {
        if (root == null)
            return;
        root.val = mp.get(root.val);
        updateTree(root.left);
        updateTree(root.right);
    }
}

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
    int sum = 0;

    public TreeNode bstToGst(TreeNode root) {
        if (root == null)
            return root;
        bstToGst(root.right);
        sum += root.val;
        root.val = sum;
        bstToGst(root.left);
        return root;
    }
}