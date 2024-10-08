func twoSum(nums []int, target int) []int {
    table := map[int]int{}

    for index, i := range nums {
        diff := target - i
        if idx, ok := table[diff]; ok {
            return []int{index, idx}
        }
        table[i] = index
    }

    return []int{}
}