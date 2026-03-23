class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        res = []
        for i, price in enumerate(prices):
            while res and prices[res[-1]] >= price:
                prices[res.pop()] -= price
            res.append(i)

        return prices