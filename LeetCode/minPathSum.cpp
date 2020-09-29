class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int height = grid.size();
        int width = grid[0].size();
        vector<vector<int>> res(height, vector<int>(width));
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if(i == 0 && j == 0){
                    res[i][j] = grid[i][j];
                }
                else if(i == 0 && j != 0){
                    res[i][j] = grid[i][j] + res[i][j-1];
                }
                else if(j == 0 && i != 0){
                    res[i][j] = grid[i][j] + res[i-1][j];
                }
                else{
                    res[i][j] = grid[i][j] + min(res[i-1][j], res[i][j-1]);
                }
            }
        }
        return res[height-1][width-1];
    }
};