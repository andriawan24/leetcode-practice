func isPalindrome(x int) bool {
    if x < 0 {
        return false
    }
    
    if x < 10 {
        return true
    }

    temp := x
    rev := 0

    for temp > 0 {
        rev = rev * 10 + (temp % 10)
        temp /= 10
    }
    
    return rev == x
}