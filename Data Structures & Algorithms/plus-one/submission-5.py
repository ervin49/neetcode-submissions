class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        curr = len(digits) - 1
        while digits[curr] == 9:
            digits[curr] = 0
            curr -= 1
        
        print(curr)
        if curr == -1:
            digits.insert(0, 1)
        else:
            digits[curr] += 1
        
        return digits