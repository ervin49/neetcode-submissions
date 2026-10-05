def calculate(n: int):
    result = 0
    while n:
        result += pow(n % 10, 2)
        n //= 10

    return int(result)

class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n!= 1:
            n = calculate(n)
            if n in seen:
                return False
            seen.add(n)

        return True
