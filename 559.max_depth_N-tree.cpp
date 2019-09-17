class Solution {
public:
    int maxDepth(Node* root) {
      if(root==NULL){
          return 0;
      }
     if(root->children.size()==0){
         return 1;
     }    
        int m=1;
      for(int i=0;i<root->children.size();i++){
         int n= 1 + maxDepth(root->children[i]);
          if(n>m){
              m=n;
          }
          
      }
        return m;
    }
};
