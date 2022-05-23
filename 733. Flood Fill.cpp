class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        
        dfsFill(image, sr, sc, image[sr][sc], newColor);
        
        return image;
    }
    void dfsFill(vector<vector<int>> &image, int sr, int sc, int c, int newColor){
        //boundries check and current pixel value must equal original pixel vlue
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() ||
          image[sr][sc] != c) return;
        
        //change the pixel to the new color
        image[sr][sc] = newColor;
        
        //dfs expansion
        dfsFill(image, sr+1, sc, c, newColor);
        dfsFill(image, sr-1, sc, c, newColor);
        dfsFill(image, sr, sc+1, c, newColor);
        dfsFill(image, sr, sc-1, c, newColor);
        
    }
};