class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int smallestIdx = 0;

            for (int j = 1; j < nums.length; j++) {
                if (nums[j] < nums[smallestIdx]) {
                    smallestIdx = j;
                }
            }

            nums[smallestIdx] *= multiplier;
        }

        return nums;
    }
}