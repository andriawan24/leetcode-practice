class Solution:
    def isValid(self, s: str) -> bool:
        valids = {'}': '{', ')': '(', ']': '['}
        st = deque()

        for ch in s:
            if ch not in valids:
                st.append(ch)
            else:
                if len(st) == 0:
                    return False
                
                if st[-1] == valids[ch]:
                    st.pop()
                else:
                    return False


        return len(st) == 0