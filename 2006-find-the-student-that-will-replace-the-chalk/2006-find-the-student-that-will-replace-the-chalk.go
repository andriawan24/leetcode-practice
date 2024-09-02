func chalkReplacer(chalks []int, k int) int {
    totalChalks := 0
    for _, chalk := range chalks {
        totalChalks = totalChalks + chalk
    }

    k = k % totalChalks

    replace := 0

    for i, chalk := range chalks {
        if chalk > k {
            replace = i
            break
        }

        k = k - chalk
    }

    return replace
}