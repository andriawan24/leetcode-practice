class Solution {
    public double minimumAverage(int[] nums) {
        Arrays.sort(nums);
        double minAverage = (nums[0] + nums[nums.length - 1]) / 2.0;

        for (int i = 1; i < nums.length / 2; i++) {
            double avg = (nums[i] + nums[nums.length - i - 1]) / 2.0;
            minAverage = Math.min(minAverage, avg);
        }

        return minAverage;
    }
}