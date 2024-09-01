class Solution {
    func isPalindrome(_ x: Int) -> Bool {
        if x < 0 {
            return false
        }

        var temp = x
        var rev = 0

        while temp > 0 {
            rev = rev * 10 + (temp % 10)
            temp /= 10
        }

        return x == rev
    }
}