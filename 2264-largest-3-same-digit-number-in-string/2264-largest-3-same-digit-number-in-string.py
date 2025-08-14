class Solution:
    def largestGoodInteger(self, num: str) -> str:
        valids = ["999", "888", "777", "666", "555", "444", "333", "222", "111", "000"]
        
        for valid in valids:
            if valid in num:
                return valid

        return ""