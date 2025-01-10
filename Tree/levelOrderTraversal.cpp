// Level Order Traversal or BFS
// https://leetcode.com/problems/binary-tree-level-order-traversal/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer={};
        if(root == NULL) return answer;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0){
            int currentSize = q.size();
            vector<int>currentRow =  {};
            // removing all the node at the same level at once
            while(currentSize>0){
               TreeNode* topNode = q.front();
               q.pop();
               currentRow.push_back(topNode->val);
               if(topNode->left != NULL) q.push(topNode->left);
               if(topNode->right != NULL) q.push(topNode->right);
               currentSize--;

            }
            answer.push_back(currentRow);
        }
        return answer;

    }
};