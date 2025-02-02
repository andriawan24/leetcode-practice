class Solution {
    public boolean check(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            boolean isValid = true;
            for (int j = i; j < nums.length + i - 1; j++) {
                int currentIdx = j % nums.length;
                int nextIdx = (j + 1) % nums.length;

                if (nums[currentIdx] > nums[nextIdx]) {
                    isValid = false;
                }
            }
            if (isValid) return true;
        }

        return false;
    }
}