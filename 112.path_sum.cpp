class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root ==  NULL) return false;
        sum = sum - root->val;
    
        if(root->left == NULL && root->right==NULL){
            if(sum==0) return true;
            else return false;
        }
        // if(hasPathSum(root->left, sum)) return true;
        // else if(hasPathSum(root->right, sum)) return true;
        // else return false;
       return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};
