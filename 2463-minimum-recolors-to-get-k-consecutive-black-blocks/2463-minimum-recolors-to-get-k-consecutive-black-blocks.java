class Solution {
    public int minimumRecolors(String blocks, int k) {
        int result = Integer.MAX_VALUE, blacks = 0;

        for (int i = 0; i < blocks.length(); i++) {
            if (i - k >= 0 && blocks.charAt(i - k) == 'B') blacks--;
            if (blocks.charAt(i) == 'B') blacks++;
            result = Math.min(result, k - blacks);
        }

        return result;
    }
}