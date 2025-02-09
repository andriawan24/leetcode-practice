class Solution {
    public int[] separateDigits(int[] nums) {
        StringBuilder digitsBuilder = new StringBuilder();

        for (int num: nums) {
            digitsBuilder.append(String.valueOf(num));
        }

        String digits = digitsBuilder.toString();

        int[] res = new int[digits.length()];

        for (int i = 0; i < res.length; i++) {
            res[i] = digits.charAt(i) - '0';
        }

        return res;
    }
}