class Solution {
    public int[] decompressRLElist(int[] nums) {
        int size = 0;

        for (int i = 0; i < nums.length; i += 2) {
            size += nums[i];
        }

        int[] res = new int[size];

        int idx = 0;
        for (int i = 0; i < nums.length; i += 2) {
            for (int j = 0; j < nums[i]; j++) {
                res[idx] = nums[i + 1];
                idx++;
            }
        }

        return res;
    }
}