class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low = 1
        high = max(piles)

        res = high
        while low <= high:
            mid = (low + high) // 2
            totalHours = sum(math.ceil(pile / mid) for pile in piles)
            if totalHours <= h:
                res = mid
                high = mid - 1
            else:
                low = mid + 1

        return res
