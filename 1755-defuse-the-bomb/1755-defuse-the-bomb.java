class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length;
        int[] result = new int[n];

        if (k == 0) return result;

        int start = 1;
        int end = k;
        int sum = 0;

        if (k < 0) {
            start = n - Math.abs(k);
            end = n - 1;
        }

        for (int i = start; i <= end; i++) {
            sum += code[i];
        }

        for (int i = 0; i < n; i++) {
            result[i] = sum;
            sum -= code[start % n];
            sum += code[(end + 1) % n];
            start++;
            end++;
        }

        return result;
    }
}