class Solution:
    def checkRecord(self, s: str) -> bool:
        a_total = 0
        l_total = 0

        for i in range(len(s)):
            if s[i] == 'A':
                a_total += 1

            if s[i] == 'L':
                if i == 0 or l_total == 0:
                    l_total = 1
                elif s[i - 1] == 'L':
                    l_total += 1
            else:
                if l_total < 3:
                    l_total = 0

        print(l_total)
            
        return a_total < 2 and l_total < 3