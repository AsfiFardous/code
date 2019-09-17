class Solution {
public:

    
    void seq1(TreeNode* root, vector<int> &stack){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            stack.push_back(root->val);
        }
        seq1(root->left, stack);
        seq1(root->right, stack);
               
    }
   
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> stack1;
        vector <int> stack2;
        if (root1 == NULL && root2 == NULL){
            return true;
        }
        else if((root1 != NULL && root2 == NULL)||(root1 == NULL && root2 != NULL)){
            return false;
        }
        else if (root1->left == NULL && root1->right == NULL && root2->left == NULL && 
                 root2->right == NULL){
            if(root1->val==root2->val){
                return true;
            }
            else
                return false;
        }
        else{
            seq1(root1, stack1);
            seq1(root2, stack2);
            
                if(stack1==stack2){
                  return true;
                }
                else
                    return false;
            }         
        
    }
};
