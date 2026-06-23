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
vector<vector<int>> levelOrderTraversal(TreeNode* root){
   queue<TreeNode*> q;
   q.push(root);
   q.push(NULL);
   vector<vector<int>> ans;
   bool leftToright=true;
   vector<int> help;

   if(root == NULL) return {};

   while(!q.empty()){

    TreeNode* temp=q.front();
    
    q.pop();
    

    if(temp==NULL){

      if(leftToright){
        ans.push_back(help);

      }
      else{
        reverse(help.begin(),help.end());
        ans.push_back(help);
      }
      
      leftToright=!leftToright;
      help.clear();

      //purana level complete traverse ho chuka hai
      
      if(!q.empty()){
        //q still has some child nodes
        q.push(NULL);
      }
    }
    else{
      help.push_back(temp->val);
      if(temp->left){
        q.push(temp->left);

      }

      if(temp->right){
        q.push(temp->right);
      }
    }

    }
   return ans;
}


    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return levelOrderTraversal(root);
    }
};
