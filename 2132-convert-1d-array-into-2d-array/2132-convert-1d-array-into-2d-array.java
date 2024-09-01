class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if (m * n != original.length) return new int[0][0];

        int[][] result = new int[m][n];
        
        int currentIdx = 0;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                result[row][col] = original[currentIdx];
                currentIdx++;
            }
        }

        return result;
    }
}