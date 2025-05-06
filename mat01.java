class Solution {
    public int[][] updateMatrix(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        int[][] ansMat = new int[m][n];
        boolean[][] visited = new boolean[m][n];
        Queue<int[]> q = new LinkedList<>();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.offer(new int[]{i,j});
                    visited[i][j] = true;
                }
            }
        }

        int [][] dirs = {{-1,0},{1,0},{0,-1},{0,1}};

        while(!q.isEmpty()){
            int[] cell = q.poll();
            int x = cell[0];
            int y = cell[1];

            for(int []dir : dirs){
                int nx = x + dir[0];
                int ny = y + dir[1];

                if(nx >= 0 && nx < m && ny >= 0 && ny < n &&!visited[nx][ny]){
                    ansMat[nx][ny] = ansMat[x][y] + 1;
                    visited[nx][ny] = true;
                    q.offer(new int[]{nx,ny});
                }
            }
        }

        return ansMat;
    }
}