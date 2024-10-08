class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> table = new HashMap<>();
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            int diff = target - nums[i];
            if (table.containsKey(diff)) {
                result[0] = i;
                result[1] = table.get(diff);
                return result;
            }
            table.put(nums[i], i);
        }
        return result;
    }
}