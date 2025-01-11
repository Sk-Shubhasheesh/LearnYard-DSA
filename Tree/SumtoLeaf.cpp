// link - https://leetcode.com/problems/sum-root-to-leaf-numbers/

class Solution {
public:
    int number = 0;
    int sum= 0;
    void recursion(TreeNode* root){
        if(root == NULL)return;

        number = number *10 + root->val;
        if(root->left==NULL && root->right==NULL){
            sum +=number;
        }
        recursion(root->left);
        recursion(root->right);
        number = number/10;

    }
    int sumNumbers(TreeNode* root) {
        recursion(root);
        return sum;
        
    }
};