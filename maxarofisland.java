class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int maxarea = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    int area = dfs(grid,i,j);
                    maxarea = Math.max(maxarea,area);
                }
            }
        }

        return maxarea;
    }

    public int dfs(int [][] grid, int i, int j){
        int m = grid.length;
        int n = grid[0].length;

        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return 0;

        grid[i][j] = 0;
        int area = 1;

        area += dfs(grid, i-1, j);
        area += dfs(grid, i+1, j);
        area += dfs(grid, i, j-1);
        area += dfs(grid, i, j+1);

        return area;
    }
}