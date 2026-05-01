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
    HashMap<Integer, Integer> mp = new HashMap<>();
    int maxi = -1;

    public int[] findMode(TreeNode root) {
        dfs(root);
        for (int freq : mp.values()) {
            maxi = Math.max(maxi, freq);
        }

        List<Integer> temp = new ArrayList<>();

        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (entry.getValue() == maxi) {
                temp.add(entry.getKey());
            }
        }

        int[] ans = new int[temp.size()];

        for (int i = 0; i < ans.length; i++) {
            ans[i] = temp.get(i);
        }

        return ans;
    }

    public void dfs(TreeNode root) {
        if (root == null)
            return;
        mp.put(root.val, mp.getOrDefault(root.val, 0) + 1);
        dfs(root.left);
        dfs(root.right);
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
    int count = 0, maxCount = 0;
    Integer prev = null;
    List<Integer> result = new ArrayList<>();

    public int[] findMode(TreeNode root) {
        dfs(root);
        int[] ans = new int[result.size()];
        for (int i = 0; i < ans.length; i++) {
            ans[i] = result.get(i);
        }
        return ans;
    }

    public void dfs(TreeNode root) {
        if (root == null)
            return;

        dfs(root.left);
        if (prev == null || root.val != prev)
            count = 1;
        else
            count++;

        if (count > maxCount) {
            maxCount = count;
            result.clear();
            result.add(root.val);
        } else if (count == maxCount) {
            result.add(root.val);
        }
        prev = root.val;
        dfs(root.right);
    }
}