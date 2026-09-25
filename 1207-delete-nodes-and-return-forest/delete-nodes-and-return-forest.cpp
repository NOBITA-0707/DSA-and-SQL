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
    TreeNode* del(TreeNode* root,set<int> &st, vector<TreeNode*>& result){
        if(root==NULL){
            return NULL;
        }

        root->left = del(root->left,st,result);
        root->right = del(root->right,st,result);

        if(st.find(root->val)!=st.end()){
            if(root->left!=NULL){
                result.push_back(root->left);
            }
            if(root->right!=NULL){
                result.push_back(root->right);
            }
            return NULL;
        }
        else{
            return root;
        }
        return root;
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
       set<int>st;
       for(int x : to_delete){
            st.insert(x);
       } 

       vector<TreeNode*> result;

       del(root,st,result);

       if(st.find(root->val)==st.end()){
            result.push_back(root);
       }
       return result;
    }
};