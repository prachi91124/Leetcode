class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        // base case
        if (image[sr][sc] == color) {
            return image;
        }

        int prevColor = image[sr][sc];
        image[sr][sc] = color;

        dfs(image, sr, sc, color, prevColor);

        return image;
    }

    public void dfs(int[][] image, int sr, int sc, int color, int prevColor) {
        int adjCells[][] = {
                { 0, 1 },
                { 1, 0 },
                { 0, -1 },
                { -1, 0 }
        };

        // dimensions of image to check bounds;
        int imgrlen = image.length;
        int imgclen = image[0].length;

        for (int[] cellVal : adjCells) {
            int r = sr + cellVal[0];
            int c = sc + cellVal[1];

            if (r < imgrlen && r >= 0 && c < imgclen && c >= 0 && image[r][c] == prevColor) {
                image[r][c] = color;
                dfs(image, r, c, color, prevColor);
            }
        }
    }
}