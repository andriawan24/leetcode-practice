func containsDuplicate(nums []int) bool {
    sort.Ints(nums)
    next := 1
    for i := range len(nums) - 1 {
        if nums[i] == nums[next] {
            return true
        }
        next++
    }
    return false
}