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
 bool isIdentical(TreeNode* r1, TreeNode* r2) {
        // code here
        if(r1==NULL && r2==NULL){
            return true;
        }
        
        if(r1==NULL && r2!=NULL){
            return false;
        }
        
        if(r1!=NULL && r2==NULL){
            return false;
        }
        
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        
        bool value=(r1->val==r2->val);
        
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
         return isIdentical(p,q);
    }
};
