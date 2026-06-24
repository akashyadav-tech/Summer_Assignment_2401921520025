/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode* findNodeInBST(TreeNode* root, int target) {

    // base case
    if(root == NULL) {
        return NULL;
    }

    if(root->val == target)
        return root;

    // assuming there are only unique values in tree

    if(target > root->val) {
        // right subtree me search karo
        return findNodeInBST(root->right, target);
    }
    else {
        return findNodeInBST(root->left, target);
    }
}

    TreeNode* searchBST(TreeNode* root, int val) {
        return findNodeInBST(root,val);
    }
};
