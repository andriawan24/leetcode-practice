func countKDifference(nums []int, k int) int {
    ans := 0
    mmap := make(map[int]int)

    for _, num := range nums {
        mmap[num]++
        ans += mmap[num + k] + mmap[num - k]
    }

    return ans
}