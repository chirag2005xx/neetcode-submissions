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
    int kthSmallest(TreeNode* root, int k) {

        vector<TreeNode*> arr;

        traverse(root,arr);

        sort(arr.begin(),arr.end(),[](TreeNode*a ,TreeNode*b){
            return a->val <b->val;

        })  ;

        return arr[k-1]->val;      
    }

    void traverse(TreeNode*root,vector<TreeNode*> &arr){

        if(root==NULL){
            return;
        }

        arr.push_back(root);
        traverse(root->left,arr);
        traverse(root->right,arr);
    }
};
