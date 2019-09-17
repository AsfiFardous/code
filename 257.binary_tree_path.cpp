class Solution {
    
public:
    
    void TreePath(TreeNode* r,  string s, vector<string> &result){
        if(r == NULL){
            return;
        }
        
        if(r->left == NULL && r->right == NULL){
            s+=to_string(r->val);
            result.push_back(s);
         }
       
       s+=to_string(r->val);
       s += "->";
        
       TreePath(r->left,s,result);
       TreePath(r->right,s,result);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> output;
        TreePath(root,"",output);
        
       return output;
    }
};
