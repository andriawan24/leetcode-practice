class Solution {
    public int getLucky(String s, int k) {
        String transformed = "";
        for (int i = 0; i < s.length(); i++) {
            transformed += ((int) s.charAt(i)) - 96;
        }
        int result = 0;
        String tempTransformed = transformed;
        for (int i = 0; i < k; i++) {
            int tempResult = 0;
            for (char numChar: tempTransformed.toCharArray()) {
                int num = Character.getNumericValue(numChar);
                tempResult += num;
            }
            tempTransformed = String.valueOf(tempResult);
            result = tempResult;
        }
        return result;
    }
}