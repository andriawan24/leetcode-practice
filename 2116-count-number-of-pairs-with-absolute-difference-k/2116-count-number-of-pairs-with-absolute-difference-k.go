func countKDifference(nums []int, k int) int {
    var ans = 0

    for i := 0; i < len(nums); i++ {
        for j := i + 1; j < len(nums); j++ {
            if math.Abs(float64(nums[i]) - float64(nums[j])) == float64(k) {
                ans++
            }
        }
    }

    return ans
}