class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        for i in range(len(mat)):
            row = mat[i][(-1) ** (i) * k:] + mat[i][:(-1) ** (i) * k]
            if row != mat[i]:
                return False

        return True
