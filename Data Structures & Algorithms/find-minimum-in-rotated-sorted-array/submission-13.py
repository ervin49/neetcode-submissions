class Solution:
    def findMin(self, nums: List[int]) -> int:
        low = 0
        high = len(nums) - 1
        while low <= high:
            mid = low + (high - low) // 2
            if mid > 0 and nums[mid - 1] > nums[mid]:
                print(f'mid: {mid}, nums[mid]: {nums[mid]}, nums[mid-1]: {nums[mid - 1]}')
                return nums[mid]
            elif mid < len(nums) - 1 and nums[mid] > nums[mid + 1]:
                return nums[mid + 1]
            elif nums[low] < nums[mid]:
                if nums[mid] > nums[high]:
                    low = mid + 1
                else:
                    high = mid - 1
            else:
                high = mid - 1

        return nums[0]


