class Solution:
    def convert_bin_to_int(self, binary: str) -> int:
        total = 0
        count = len(binary) - 1

        for ch in binary:
            num = int(ch)
            total += num * pow(2, count)
            count -= 1

        return total

    def addBinary(self, a: str, b: str) -> str:
        total_a = self.convert_bin_to_int(a)
        total_b = self.convert_bin_to_int(b)

        subs = total_a + total_b

        result = ""

        if subs == 0:
            return '0'

        while subs > 0:
            tmp = subs % 2
            subs //= 2
            result = str(tmp) + result

        return result