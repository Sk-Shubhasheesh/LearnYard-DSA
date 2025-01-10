// link - https://www.geeksforgeeks.org/problems/preorder-traversal/1
class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    vector<int>ans={};
    void recursion(Node* root){
        // Base Case
        if(root == NULL) return;
        // root , left, right
        ans.push_back(root->data);
        
        // recursive call
        recursion(root->left);
        recursion(root->right);
    }
    vector<int> preorder(Node* root) {
        // write code here
        ans.clear();
        recursion(root);
        return ans;
    }
};