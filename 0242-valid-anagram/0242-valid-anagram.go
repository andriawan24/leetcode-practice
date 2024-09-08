func isAnagram(s string, t string) bool {
    m := make(map[rune]int)

    for _, v := range s {
        m[v]++
    }

    for _, v := range t {
        m[v]--
    }

    for _, v := range m {
        if v != 0 {
            return false
        }
    }

    return true
}