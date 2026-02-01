class Solution:
    def isPalindrome(self, s: str) -> bool:
        start = 0
        end = len(s) - 1

        while start < end:
            left_ch = s[start]
            right_ch = s[end]

            if s[start].isalnum():
                left_ch = left_ch.lower()
            else:
                start += 1
                continue

            if s[end].isalnum():
                right_ch = right_ch.lower()
            else:
                end -= 1
                continue

            if left_ch == right_ch:
                start += 1
                end -= 1
            else:
                return False

        return True