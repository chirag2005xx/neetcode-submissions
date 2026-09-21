class Solution {
public:
    bool isValid(TreeNode* root, long long minVal, long long maxVal) {

        if(root == NULL){
            return true;
        }

        if(root->val <= minVal || root->val >= maxVal){
            return false;
        }

        bool val1 = isValid(root->left, minVal, root->val);
        bool val2 = isValid(root->right, root->val, maxVal);

        return val1 && val2;
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};
