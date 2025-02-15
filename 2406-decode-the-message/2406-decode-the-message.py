class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        table = {}
        decoded = ""

        for k in key:
            if k != ' ' and k not in table:
                table[k] = chr(len(table) + 97)

        for m in message:
            decoded += m if m == ' ' else table[m]

        return decoded
        