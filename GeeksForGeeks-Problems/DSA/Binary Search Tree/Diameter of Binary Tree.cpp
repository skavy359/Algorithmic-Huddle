class Solution {
  public:
    int ans=0;
    int result(Node* root){
        if(root==nullptr){
            return 0;
        }
        int lh=result(root->left);
        int rh=result(root->right);
        ans=max(ans,lh+rh);
        return (1+max(lh,rh));
    }
    int diameter(Node* root) {
        // Your code here
        result(root);
        return ans;
    }
};