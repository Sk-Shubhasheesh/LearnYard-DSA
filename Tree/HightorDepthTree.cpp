// Maximum Height or Depth of a Tree
//  https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;

    }
    int maxDepth(TreeNode* root) {
        return height(root);
        
    }
};