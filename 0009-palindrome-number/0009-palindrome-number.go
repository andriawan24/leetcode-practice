func isPalindrome(x int) bool {
    if x < 0 {
        return false
    }
    
    if x < 10 {
        return true
    }

    if x % 10 == 0 {
        return false
    }

    revHalf := 0

    for x > revHalf {
        revHalf = revHalf * 10 + (x % 10)
        x /= 10
    }

    return x == revHalf || x == revHalf / 10
}