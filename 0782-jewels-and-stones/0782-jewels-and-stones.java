class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int result = 0;
        HashMap<Character, Integer> tables = new HashMap<Character, Integer>();

        for (char jewel: jewels.toCharArray()) {
            tables.put(jewel, 1);
        }
        
        for (char stone : stones.toCharArray()) {
            if (tables.get(stone) != null) {
                result++;
            }
        }

        return result;
    }
}