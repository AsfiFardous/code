class Solution {
public:
    bool Symmetric(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;
        if(p->val!=q->val)return false;
        return Symmetric(p->left, q->right) && Symmetric(p->right, q->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        return Symmetric(root->left,root->right);  
        
    }
};
