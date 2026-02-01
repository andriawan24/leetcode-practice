class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = ''.join([i.lower() for i in s if i.isalnum()])
        rev = cleaned[::-1]
        return cleaned == rev