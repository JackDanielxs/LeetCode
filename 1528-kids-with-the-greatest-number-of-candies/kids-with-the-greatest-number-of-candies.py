class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        max_candy = max(candies)
        return [c + extraCandies >= max_candy for c in candies]
