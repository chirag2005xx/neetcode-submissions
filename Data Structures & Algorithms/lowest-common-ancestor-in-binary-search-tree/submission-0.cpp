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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> vec1;
        vector<TreeNode*> vec2;
        traverse(root,p,vec1);
        traverse(root,q,vec2);


      int n = min(vec1.size(), vec2.size());

TreeNode* ans = nullptr;

for(int i = 0; i < n; i++){
    if(vec1[i] != vec2[i]){
        break;
    }

    ans = vec1[i];
}

return ans;
        


      


        
    }


    bool traverse(TreeNode*root,TreeNode*p,vector<TreeNode*>&vec){


        if(root==NULL){
            return 0;
        }

        vec.push_back(root);

        

        if(root->val==p->val){

            


            return 1;
        }
        bool val1=traverse(root->left,p,vec);

        bool val2=traverse(root->right,p,vec);

        if(val1==1||val2==1){
            return 1;
        }
        else{
            vec.pop_back();
            return 0;
        }
    }




    

    
};
