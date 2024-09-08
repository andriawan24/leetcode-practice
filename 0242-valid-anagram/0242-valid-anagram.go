func isAnagram(s string, t string) bool {
    counts := make(map[rune]int)

    for _, v := range s {
        counts[v]++
    }

    for _, v := range t {
        counts[v]--
    }

    for _, v := range counts {
        if v > 0 {
            return false
        }
    }

    return len(s) == len(t)
}