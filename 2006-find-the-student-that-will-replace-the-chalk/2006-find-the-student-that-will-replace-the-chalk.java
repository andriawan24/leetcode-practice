class Solution {
    public int chalkReplacer(int[] chalks, long k) {
        long totalChalks = 0;
        for (int chalk: chalks) {
            totalChalks += chalk;
        }

        k = (int) k % totalChalks;

        int replace = 0;

        for (int i = 0; i < chalks.length; i++) {
            if (chalks[i] > k) {
                replace = i;
                break;
            } else {
                k -= chalks[i];
            }
        }

        return replace;
    }
}