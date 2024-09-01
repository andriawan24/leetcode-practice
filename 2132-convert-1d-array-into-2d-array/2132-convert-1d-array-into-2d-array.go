func construct2DArray(original []int, m int, n int) [][]int {
    if len(original) != m * n {
        return make([][]int, 0)
    }

    result := make([][]int, m)
    for i := range result {
        result[i] = make([]int, n)
    }

    currentIdx := 0

    for i := range m {
        for j := range n {
            result[i][j] = original[currentIdx]
            currentIdx++
        }
    }

    return result
}