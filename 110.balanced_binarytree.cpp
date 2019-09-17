class Solution {
public:
    int depth(TreeNode *a){
        if(a==NULL){
            return 0;
        }
        int lDepth = 0, rDepth = 0;
        
        if(a->left!=NULL){
            lDepth =  depth(a->left);
        }
        
        if(a->right!=NULL){
            rDepth = depth(a->right);
        }
        
        if(rDepth ==-1 || lDepth == -1){
            return -1;
        }
        
        if(abs(lDepth-rDepth)<=1){
            //balance
            return 1+max(lDepth, rDepth);
        }else{
            return -1;
        }
           
       }
        
    
    bool isBalanced(TreeNode* root) {
        
       if(depth(root)!=-1)return true;
       return false;
    }
};
