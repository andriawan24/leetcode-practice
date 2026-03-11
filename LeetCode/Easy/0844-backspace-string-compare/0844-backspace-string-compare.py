class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s_comp = ""
        t_comp = ""

        for i in s:
            if i == '#':
                s_comp = s_comp[:-1]
            else:
                s_comp += i

        for i in t:
            if i == '#':
                t_comp = t_comp[:-1]
            else:
                t_comp += i

        return s_comp == t_comp