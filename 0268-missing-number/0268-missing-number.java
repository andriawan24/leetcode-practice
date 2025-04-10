class Solution {
    public int missingNumber(int[] nums) {
        boolean[] checks = new boolean[nums.length + 1];

        for (int num: nums) {
            checks[num] = true;
        }

        for (int i = 0; i < checks.length; i++) {
            if (!checks[i]) {
                return i;
            }
        }

        return -1;
    }
}