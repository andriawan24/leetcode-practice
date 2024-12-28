class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int result = 0;
        boolean[] jewelsSet = new boolean[128];

        for (char jewel: jewels.toCharArray()) {
            jewelsSet[jewel] = true;
        }

        for (char stone: stones.toCharArray()) {
            if (jewelsSet[stone]) {
                result++;
            }
        }

        return result;
    }
}