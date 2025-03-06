class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int[] result = new int[2];

        int[] temp = new int[grid.length * grid.length];

        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[i].length; j++) {
                temp[grid[i][j] - 1]++;
            }
        }

        for (int i = 0; i < temp.length; i++) {
            if (temp[i] == 2) {
                result[0] = i + 1;
            } else if (temp[i] == 0) {
                result[1] = i + 1;
            }
        }

        return result;
    }
}