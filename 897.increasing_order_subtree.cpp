class Solution {
public:
    vector<TreeNode*> v;
    void dfs(TreeNode *n){
        if(n==NULL)return;
        dfs(n ->left);
        v.push_back(n);
        dfs(n->right);
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)return NULL;
        v.clear();
        dfs(root);
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1){
                v[i]->left = NULL;
                v[i]->right = NULL;
            }else{
                v[i]->left = NULL;
                v[i]->right = v[i+1];
            }
        }
        return v[0];
    }
};
