func containsDuplicate(nums []int) bool {
    var counts map[int]int
    counts = map[int]int{}

    for _, num := range nums {
        if counts[num] > 0 {
            return true
        }

        counts[num] = counts[num] + 1
    }

    return false
}