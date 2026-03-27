class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        n = len(mat)
        m = len(mat[0])
        k %= m

        if not k:
            return True

        for i in range(n):
            row = mat[i][(-1) ** (i) * k:] + mat[i][:(-1) ** (i) * k]
            if row != mat[i]:
                return False

        return True
