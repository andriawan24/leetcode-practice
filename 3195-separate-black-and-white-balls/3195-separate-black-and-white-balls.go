func minimumSteps(s string) int64 {
    var swap int64
    black := 0

    for _, c := range s {
        if c == '0' {
            swap += int64(black)
        } else {
            black++
        }
    }

    return swap
}