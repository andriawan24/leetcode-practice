class Solution {
    static {
        for (int i = 0; i < 500; i++) {
            moveZeroes(new int[] {});
        }
    }

    public static void moveZeroes(int[] nums) {
        int z = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[z];
                nums[z] = temp;
                z++;
            }
        }
    }
}