func minimumMoves(s string) int {
    var (
        moves int
        l int
    )

    for l < len(s) {
        if (s[l] == 'X') {
            moves++;
            l += 2;
        }
        l++;
    }

    return moves;
}