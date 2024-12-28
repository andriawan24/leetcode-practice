class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int result = 0;
        
        for (char stone : stones.toCharArray()) {
            if (jewels.indexOf(stone) != -1) {
                result++;
            }
        }

        return result;
    }
}