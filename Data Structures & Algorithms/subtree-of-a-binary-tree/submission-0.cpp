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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root==NULL){
            return false;
        }
        if(subRoot==NULL){
            return true;

        }

        return traverse(root,subRoot);
        
        
    }


    bool traverse(TreeNode*root,TreeNode* subRoot){

        int exists=false;

        if(root==NULL){
            return false;
        }

        bool val1=traverse(root->left,subRoot);
        if(root->val==subRoot->val){

            if(issametree(root,subRoot)){
                return true;
            }

            
           
        }
        bool val2=traverse(root->right,subRoot);

        if(val1||val2){
            return true;
        }
        else{
            return false;
        }
    }

    bool issametree(TreeNode*p,TreeNode*q){

        if(p==NULL&&q==NULL){
            return true;
        }
        else if(p!=NULL&&q==NULL){
            return false;
        }
        else if(p==NULL&&q!=NULL){
            return false;
        }
        else if(p->val!=q->val){
            return false;
        }

        bool val1= issametree(p->left,q->left);
        bool val2= issametree(p->right,q->right);

        if(val1==true &&val2==true){
            return true;
        }
        else{
            return false;
        }

        
    }






};
