class Solution {
      public int evalRPN(String[] tokens){
                Stack<Integer> st = new Stack<>();
        for(String token : tokens) {
            if(!token.equals("*") && !token.equals("/") && !token.equals("+") && !token.equals("-")){
                st.push(Integer.parseInt(token));
                continue;
            }
            Integer secondOperand = st.pop();
            Integer firstOperand = st.pop();
            switch(token){
                case "*":
                    st.push(firstOperand * secondOperand);
                    break;
                case "+":
                    st.push(firstOperand + secondOperand);
                    break;
                case "-":
                    st.push(firstOperand - secondOperand);
                    break;
                case "/":
                    st.push(firstOperand / secondOperand);
                    break;
            }
        }
        return st.pop();
    }

}
