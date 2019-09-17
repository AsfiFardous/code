class Solution {
public:
    vector<vector<int>> graph;
    vector<int> flower;
    
    void assign(int a){
        if(flower[a] != -1){
            return ;
        }
        
        for(int i=1;i<=4;i++){
            bool found = false;
            for(int j=0;j<graph[a].size();j++){
                if(flower[graph[a][j]] == i){
                    found = true;
                    break;
                }
            }
            if(!found){
                flower[a] = i;
                break;
            }
        }
        for(int i=0;i<graph[a].size();i++){
            assign(graph[a][i]);
        }
    }
    
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        graph.clear();
        graph.resize(N);
        for(int i=0;i<paths.size();i++){
           graph[paths[i][0]-1].push_back(paths[i][1]-1) ;
           graph[paths[i][1]-1].push_back(paths[i][0]-1) ; 	
        }
        flower.clear();
        flower.resize(N,-1);
        for(int i=0;i<N;i++) assign(i);
        return flower;
    }
        
};
