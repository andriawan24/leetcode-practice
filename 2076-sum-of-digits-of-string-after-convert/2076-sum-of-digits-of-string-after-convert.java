class Solution {
    public int getLucky(String s, int k) {
        StringBuilder transformed = new StringBuilder();
        for (char i: s.toCharArray()) {
            transformed.append(i - 'a' + 1);
        }

        s = transformed.toString();

        int result = 0;
        for (int i = 0; i < k; i++) {
            int sum = 0;
            for (char numChar: s.toCharArray()) {
                int num = Character.getNumericValue(numChar);
                sum += num;
            }
            s = String.valueOf(sum);
            result = sum;
        }
        return result;
    }
}