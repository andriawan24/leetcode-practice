class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        while (k > 0) {
            int smallestIdx = 0;

            for (int j = 1; j < nums.length; j++) {
                if (nums[j] < nums[smallestIdx]) {
                    smallestIdx = j;
                }
            }

            nums[smallestIdx] *= multiplier;
            k--;
        }

        System.gc();

        return nums;
    }
}