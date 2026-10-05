class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        tabulation = [0] * (len(cost) + 1)
        for i in range(2, len(cost) + 1):
            tabulation[i] = min(tabulation[i - 1] + cost[i - 1], tabulation[i - 2] + cost[i - 2])

        return tabulation[len(cost)]