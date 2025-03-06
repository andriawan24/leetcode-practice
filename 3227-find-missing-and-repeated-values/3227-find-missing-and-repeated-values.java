class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int length = grid.length;
        int n = length * length;
        int[] result = new int[2];
        int[] freq = new int[n];

        for (int[] i: grid) {
            for (int j: i) {
                freq[j - 1]++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] == 0) {
                result[1] = i+1;
            }

            if (freq[i] == 2) {
                result[0] = i+1;
            }
        }

        return result;
    }
}