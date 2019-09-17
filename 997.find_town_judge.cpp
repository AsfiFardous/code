class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<vector<int>> graph(N+1);
  
        for(int i=0;i<trust.size();i++){
            int u,v;
            u = trust[i][0];
            v = trust[i][1];
            graph[u].push_back(v);
        }
        
        
    for(int i=1;i<=N;i++){
          int count=0;
        if(graph[i].size()==0){
          
        for(int j=N;j>0;j--){
            for(int k=0;k<graph[j].size();k++){
        if(graph[j][k]==i) {
        count++;
        }
      }
    }     
        }
        if(count==(N-1)){
            return i;
        }
    }
    return -1;
        }
    
};
