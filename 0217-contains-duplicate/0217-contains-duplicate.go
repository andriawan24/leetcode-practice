func containsDuplicate(nums []int) bool {
    counts := make(map[int]int, len(nums))
    for _, num := range nums {
        counts[num]++
        if counts[num] == 2 {
            return true
        }
    }
    return false
}