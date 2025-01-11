// Binary Tree Maximum Path Sum
// LINK - https://leetcode.com/problems/binary-tree-maximum-path-sum/
class Solution {
public:
    int answer = INT_MIN;
    int recursion(TreeNode* root){
        if(root == NULL) return 0;

        int option1 = root->val;
        int left = (root->left==NULL ? (int)(-1e9): recursion(root->left));
        int right = (root->right==NULL ? (int)(-1e9): recursion(root->right));
        int option2 = max(option1, max(left+option1, right+option1));  
        int option3 = option1 +left+right;
        int option4 = max(left, right);
        answer = max(answer, max(option1, max(option2, max(option3,option4))));
        return option2;
    }
    int maxPathSum(TreeNode* root) {
        recursion(root);
        return answer;
        
    }
};