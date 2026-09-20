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
    vector<vector<int>> levelOrder(TreeNode* root) { 

        queue<TreeNode*> q;

        vector<vector<int>> answer;
        
        if(root==NULL){
            return answer;
        }
        

        q.push(root);

        while(!q.empty()){

            vector<int> ans;

            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
            ans.push_back(temp->val);
            q.pop();

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

            }
            

            answer.push_back(ans);
        }

        return answer;


       
        
    }
};
