class Solution {
public:
    void dfs(int r, int c, int srcColor, vector<vector<int>>& image, int color){
        int h = image.size(), w = image[0].size();
        if((r < 0) || (r >= h) || (c < 0) || (c >= w) || (image[r][c] == color) || (image[r][c] != srcColor)) return;
        image[r][c] = color;
        dfs(r-1, c, srcColor, image, color);
        dfs(r+1, c, srcColor, image, color);
        dfs(r, c-1, srcColor, image, color);
        dfs(r, c+1, srcColor, image, color);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(sr, sc, image[sr][sc], image, color);
        return image;
    }
};