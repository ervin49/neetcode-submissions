class Solution:
    def climbStairs(self, n: int) -> int:
        vec = [0] * 49
        vec[1] = 1
        vec[2] = 2
        vec[3] = 3

        cnt = 2
        while cnt <= n:
            cnt += 1
            vec[cnt] = vec[cnt - 1] + vec[cnt - 2]
        
        return vec[n]
        
