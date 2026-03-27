class Solution:
    def areSimilar(self, mat: List[List[int]], k: int) -> bool:
        res = mat.copy()

        for i in range(k):
            for k in range(len(res)):
                if k % 2 == 0:
                    res[k] = res[k][1:] + res[k][:1]
                else:
                    res[k] = res[k][-1:] + res[k][:-1]

        for i in range(len(res)):
            if res[i] != mat[i]:
                return False

        return True
