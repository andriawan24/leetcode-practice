class Solution:
    def solveQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        table = defaultdict(list)
        result = []
        n = len(nums)

        for idx, val in enumerate(nums):
            table[val].append(idx)

        for q in queries:
            num = nums[q]
            indices = table[num]

            if len(indices) == 1:
                result.append(-1)
                continue

            pos = bisect_left(indices, q)
            left_neighbor = indices[pos - 1]
            right_neighbor = indices[(pos + 1) % len(indices)]

            def get_circular_dist(i, j):
                direct_dist = abs(i - j)
                return min(direct_dist, n - direct_dist)

            dist_to_left = get_circular_dist(q, left_neighbor)
            dist_to_right = get_circular_dist(q, right_neighbor)
            
            result.append(min(dist_to_left, dist_to_right))

        return result