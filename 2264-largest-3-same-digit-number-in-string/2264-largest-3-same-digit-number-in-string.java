class Solution {
    public String largestGoodInteger(String num) {
        int max = -1;
        for (int i = 2; i < num.length(); i++) {
            if (num.charAt(i) == num.charAt(i-1) && num.charAt(i) == num.charAt(i-2)) {
                int number = num.charAt(i) - '0';
                max = Math.max(number, max);
            }
        }
        return max >= 0 ? ""+max+max+max : "";
    }
}