class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var table = HashMap<Int, Int>()
        nums.forEachIndexed { index, i ->
            val diff = target - i;
            if (table.containsKey(diff)) {
                return intArrayOf(index, table.get(diff)!!)
            }
            table.put(i, index)
        }
        return intArrayOf(0, 0)
    }
}