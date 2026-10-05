class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum = 0
        for num in nums:
            sum += num
        
        size = len(nums)
        return size * (size + 1) // 2 - sum