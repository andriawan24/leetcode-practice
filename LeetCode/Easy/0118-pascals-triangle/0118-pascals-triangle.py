class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0:
            return []

        result = [[1]]

        for i in range(1, numRows):
            temp = []
            for j in range(i):
                if j == 0:
                    temp.append(1)
                else:
                    temp.append(result[i-1][j] + result[i-1][j-1])
            temp.append(1)
            result.append(temp)

        return result