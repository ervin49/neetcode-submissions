class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            
            if token in ["+","-","*","/"]:
                num1 = stack.pop()
                num2 = stack.pop()
                if token == "+":
                    res = num2 + num1
                elif token == "-":
                    res = num2 - num1
                elif token == "*":
                    res = num2 * num1
                elif token == "/":
                    res = int(num2 / num1)
                stack.append(res)
            else:
                stack.append(int(token))
        return stack[-1]
