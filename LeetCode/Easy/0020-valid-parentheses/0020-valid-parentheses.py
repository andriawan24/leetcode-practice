class Solution:
    def isValid(self, s: str) -> bool:
        valids = {'}': '{', ')': '(', ']': '['}
        cur = []

        for ch in s:
            if ch not in valids:
                cur.append(ch)
            else:
                if len(cur) == 0:
                    return False
                
                if cur[-1] == valids[ch]:
                    cur.pop()
                else:
                    return False


        return len(cur) == 0