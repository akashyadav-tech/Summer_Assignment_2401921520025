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
    bool preorder(TreeNode* root,int &targetSum,int &path){
        if(root==NULL){
            return false;
        }
         
        path+=root->val;

        if(path==targetSum && root->left==NULL && root->right==NULL){
            return true;
        }


        bool left=preorder(root->left,targetSum,path);
        bool right=preorder(root->right,targetSum,path);
        path-=root->val;

        return left||right;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int path=0;

        return preorder(root,targetSum,path);
    }
};
