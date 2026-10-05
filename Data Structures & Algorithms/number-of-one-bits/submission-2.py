class Solution:
    def hammingWeight(self, n: int) -> int:
        result = bin(n)[2:]
        print(result)
        sum = 0
        for c in result:
            if c == '1':
                sum += 1
        return sum