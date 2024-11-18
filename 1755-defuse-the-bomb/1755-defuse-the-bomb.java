class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length;
        int[] result = new int[n];

        for (int i = 0; i < n; i++) {
            if (k == 0) {
                result[i] = 0;
                continue;
            }

            int start = (k > 0) ? i + 1 % n : i + n + k;
            System.out.println("Start index: " + start);
            System.out.println();
            int temp = 0;
            for (int j = start; j < start + Math.abs(k); j++) {
                System.out.println("Current index: " + j % n);
                temp += code[j % n];
            }
            System.out.println();
            result[i] = temp;
        }

        return result;
    }
}