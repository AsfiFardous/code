class Solution {
public:
    void doFloodFill(vector<vector<int>>& image, int r, int c, int newColor, int currentCol){
        if(r<0 || c<0 || r>=image.size() || c>=image[r].size()){
            return;
        }
        if(image[r][c] != currentCol) return ;
        
        image[r][c] = newColor;
        
        doFloodFill(image,r-1,c,newColor, currentCol);
        doFloodFill(image,r+1,c,newColor, currentCol);
        doFloodFill(image,r,c-1,newColor, currentCol);
        doFloodFill(image,r,c+1,newColor, currentCol);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       if(image[sr][sc] != newColor)
           doFloodFill(image, sr, sc, newColor, image[sr][sc]);
        
        return image;
    }
};
